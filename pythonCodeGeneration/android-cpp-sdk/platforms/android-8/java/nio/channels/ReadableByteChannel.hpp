/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.ReadableByteChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_READABLEBYTECHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_READABLEBYTECHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Channel; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }


#include <java/io/Closeable.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/Channel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class ReadableByteChannel;
	class ReadableByteChannel
		: public object<ReadableByteChannel>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ReadableByteChannel(jobject jobj)
		: object<ReadableByteChannel>(jobj)
		{
		}

		operator local_ref<java::nio::channels::Channel>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;


		jint read(local_ref< java::nio::ByteBuffer >  const&);
	}; //class ReadableByteChannel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_READABLEBYTECHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_READABLEBYTECHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_READABLEBYTECHANNEL_HPP_IMPL

namespace j2cpp {



java::nio::channels::ReadableByteChannel::operator local_ref<java::nio::channels::Channel>() const
{
	return local_ref<java::nio::channels::Channel>(get_jobject());
}

java::nio::channels::ReadableByteChannel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::ReadableByteChannel::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

jint java::nio::channels::ReadableByteChannel::read(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		java::nio::channels::ReadableByteChannel::J2CPP_CLASS_NAME,
		java::nio::channels::ReadableByteChannel::J2CPP_METHOD_NAME(0),
		java::nio::channels::ReadableByteChannel::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::nio::channels::ReadableByteChannel,"java/nio/channels/ReadableByteChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::ReadableByteChannel,0,"read","(Ljava/nio/ByteBuffer;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_READABLEBYTECHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
