/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.PipedInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class PipedOutputStream; } } }


#include <java/io/Closeable.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PipedOutputStream.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class PipedInputStream;
	class PipedInputStream
		: public object<PipedInputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit PipedInputStream(jobject jobj)
		: object<PipedInputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::InputStream>() const;


		PipedInputStream();
		PipedInputStream(local_ref< java::io::PipedOutputStream > const&);
		PipedInputStream(jint);
		PipedInputStream(local_ref< java::io::PipedOutputStream > const&, jint);
		jint available();
		void close();
		void connect(local_ref< java::io::PipedOutputStream >  const&);
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);

	}; //class PipedInputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::PipedInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::PipedInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::PipedInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}


java::io::PipedInputStream::PipedInputStream()
: object<java::io::PipedInputStream>(
	call_new_object<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(0),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::io::PipedInputStream::PipedInputStream(local_ref< java::io::PipedOutputStream > const &a0)
: object<java::io::PipedInputStream>(
	call_new_object<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(1),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::io::PipedInputStream::PipedInputStream(jint a0)
: object<java::io::PipedInputStream>(
	call_new_object<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(2),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



java::io::PipedInputStream::PipedInputStream(local_ref< java::io::PipedOutputStream > const &a0, jint a1)
: object<java::io::PipedInputStream>(
	call_new_object<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(3),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1)
)
{
}


jint java::io::PipedInputStream::available()
{
	return call_method<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(4),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

void java::io::PipedInputStream::close()
{
	return call_method<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(5),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

void java::io::PipedInputStream::connect(local_ref< java::io::PipedOutputStream > const &a0)
{
	return call_method<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(6),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jint java::io::PipedInputStream::read()
{
	return call_method<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(7),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jint java::io::PipedInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PipedInputStream::J2CPP_CLASS_NAME,
		java::io::PipedInputStream::J2CPP_METHOD_NAME(8),
		java::io::PipedInputStream::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0, a1, a2);
}




J2CPP_DEFINE_CLASS(java::io::PipedInputStream,"java/io/PipedInputStream")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,1,"<init>","(Ljava/io/PipedOutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,2,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,3,"<init>","(Ljava/io/PipedOutputStream;I)V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,4,"available","()I")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,5,"close","()V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,6,"connect","(Ljava/io/PipedOutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,7,"read","()I")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,8,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::PipedInputStream,9,"receive","(I)V")
J2CPP_DEFINE_FIELD(java::io::PipedInputStream,0,"buffer","[B")
J2CPP_DEFINE_FIELD(java::io::PipedInputStream,1,"in","I")
J2CPP_DEFINE_FIELD(java::io::PipedInputStream,2,"out","I")
J2CPP_DEFINE_FIELD(java::io::PipedInputStream,3,"PIPE_SIZE","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PIPEDINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
