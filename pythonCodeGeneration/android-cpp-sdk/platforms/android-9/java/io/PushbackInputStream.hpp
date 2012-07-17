/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.PushbackInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PUSHBACKINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_PUSHBACKINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class FilterInputStream; } } }


#include <java/io/Closeable.hpp>
#include <java/io/FilterInputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class PushbackInputStream;
	class PushbackInputStream
		: public object<PushbackInputStream>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit PushbackInputStream(jobject jobj)
		: object<PushbackInputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::io::FilterInputStream>() const;


		PushbackInputStream(local_ref< java::io::InputStream > const&);
		PushbackInputStream(local_ref< java::io::InputStream > const&, jint);
		jint available();
		void close();
		jboolean markSupported();
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jlong skip(jlong);
		void unread(local_ref< array<jbyte,1> >  const&);
		void unread(local_ref< array<jbyte,1> >  const&, jint, jint);
		void unread(jint);
		void mark(jint);
		void reset();

	}; //class PushbackInputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PUSHBACKINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PUSHBACKINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_PUSHBACKINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::PushbackInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::PushbackInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::PushbackInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

java::io::PushbackInputStream::operator local_ref<java::io::FilterInputStream>() const
{
	return local_ref<java::io::FilterInputStream>(get_jobject());
}


java::io::PushbackInputStream::PushbackInputStream(local_ref< java::io::InputStream > const &a0)
: object<java::io::PushbackInputStream>(
	call_new_object<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(0),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::io::PushbackInputStream::PushbackInputStream(local_ref< java::io::InputStream > const &a0, jint a1)
: object<java::io::PushbackInputStream>(
	call_new_object<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(1),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


jint java::io::PushbackInputStream::available()
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(2),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void java::io::PushbackInputStream::close()
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(3),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

jboolean java::io::PushbackInputStream::markSupported()
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(4),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jint java::io::PushbackInputStream::read()
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(5),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint java::io::PushbackInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(6),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jlong java::io::PushbackInputStream::skip(jlong a0)
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(7),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(7), 
		jlong
	>(get_jobject(), a0);
}

void java::io::PushbackInputStream::unread(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(8),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void java::io::PushbackInputStream::unread(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(9),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::PushbackInputStream::unread(jint a0)
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(10),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void java::io::PushbackInputStream::mark(jint a0)
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(11),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void java::io::PushbackInputStream::reset()
{
	return call_method<
		java::io::PushbackInputStream::J2CPP_CLASS_NAME,
		java::io::PushbackInputStream::J2CPP_METHOD_NAME(12),
		java::io::PushbackInputStream::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::io::PushbackInputStream,"java/io/PushbackInputStream")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,1,"<init>","(Ljava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,2,"available","()I")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,3,"close","()V")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,4,"markSupported","()Z")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,5,"read","()I")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,6,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,7,"skip","(J)J")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,8,"unread","([B)V")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,9,"unread","([BII)V")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,10,"unread","(I)V")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,11,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::PushbackInputStream,12,"reset","()V")
J2CPP_DEFINE_FIELD(java::io::PushbackInputStream,0,"buf","[B")
J2CPP_DEFINE_FIELD(java::io::PushbackInputStream,1,"pos","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PUSHBACKINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
