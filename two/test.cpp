#include<iostream> 
#include<vector> 
#include<google/protobuf/io/coded_stream.h> 
#include<google/protobuf/io/zero_copy_stream_impl.h> 
#include "message.pb.h"
std::vector<unsigned char> encode( google::protobuf::Message & msg )
{
  std::vector<unsigned char> data( msg.ByteSize() + 
    google::protobuf::io::CodedOutputStream::VarintSize32( msg.ByteSize() ) );
  google::protobuf::io::ArrayOutputStream array_out( &data[0], data.size() );
  google::protobuf::io::CodedOutputStream coded_out( &array_out );
  coded_out.WriteVarint32( msg.ByteSize() );
  msg.SerializeToCodedStream( &coded_out );
  return data;
}

void decode( const std::vector<unsigned char> & data, google::protobuf::Message & msg )
{
  google::protobuf::io::ArrayInputStream array_in( &data[0] , data.size() );
  google::protobuf::io::CodedInputStream coded_in( &array_in );
  google::protobuf::uint32 size;
  coded_in.ReadVarint32( &size );
  google::protobuf::io::CodedInputStream::Limit msg_limit = coded_in.PushLimit( size );
  msg.ParseFromCodedStream( &coded_in );
  coded_in.PopLimit( msg_limit );
}

int main(int argc, char **argv)
{
  my_message in_msg;
  in_msg.set_word( "blah blah" );
  in_msg.set_number( 123 );
  std::vector<unsigned char> data = encode( in_msg );

  my_message out_msg;
  decode( data, out_msg );
  std::cout << "word: " << out_msg.word() << " number: " << out_msg.number() << std::endl;
  return 0;
} 
