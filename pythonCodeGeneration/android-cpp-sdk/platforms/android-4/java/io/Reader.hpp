/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.Reader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_READER_HPP_DECL
#define J2CPP_JAVA_IO_READER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace nio { class CharBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class Readable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Closeable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Readable.hpp>
#include <java/nio/CharBuffer.hpp>


namespace j2cpp {

namespace java { namespace io {

	class Reader;
	class Reader
		: public object<Reader>
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
		J2CPP_DECLARE_FIELD(0)

		explicit Reader(jobject jobj)
		: object<Reader>(jobj)
		{
		}

		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::lang::Readable>() const;
		operator local_ref<java::lang::Object>() const;


		void close();
		void mark(jint);
		jboolean markSupported();
		jint read();
		jint read(local_ref< array<jchar,1> >  const&);
		jint read(local_ref< array<jchar,1> >  const&, jint, jint);
		jboolean ready();
		void reset();
		jlong skip(jlong);
		jint read(local_ref< java::nio::CharBuffer >  const&);

	}; //class Reader

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_READER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_READER_HPP_IMPL
#define J2CPP_JAVA_IO_READER_HPP_IMPL

namespace j2cpp {



java::io::Reader::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::Reader::operator local_ref<java::lang::Readable>() const
{
	return local_ref<java::lang::Readable>(get_jobject());
}

java::io::Reader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



void java::io::Reader::close()
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(2),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::io::Reader::mark(jint a0)
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(3),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

jboolean java::io::Reader::markSupported()
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(4),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

jint java::io::Reader::read()
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(5),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint java::io::Reader::read(local_ref< array<jchar,1> > const &a0)
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(6),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0);
}

jint java::io::Reader::read(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(7),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jboolean java::io::Reader::ready()
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(8),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

void java::io::Reader::reset()
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(9),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}

jlong java::io::Reader::skip(jlong a0)
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(10),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(10), 
		jlong
	>(get_jobject(), a0);
}

jint java::io::Reader::read(local_ref< java::nio::CharBuffer > const &a0)
{
	return call_method<
		java::io::Reader::J2CPP_CLASS_NAME,
		java::io::Reader::J2CPP_METHOD_NAME(11),
		java::io::Reader::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(java::io::Reader,"java/io/Reader")
J2CPP_DEFINE_METHOD(java::io::Reader,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::Reader,1,"<init>","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::Reader,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::Reader,3,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::Reader,4,"markSupported","()Z")
J2CPP_DEFINE_METHOD(java::io::Reader,5,"read","()I")
J2CPP_DEFINE_METHOD(java::io::Reader,6,"read","([C)I")
J2CPP_DEFINE_METHOD(java::io::Reader,7,"read","([CII)I")
J2CPP_DEFINE_METHOD(java::io::Reader,8,"ready","()Z")
J2CPP_DEFINE_METHOD(java::io::Reader,9,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::Reader,10,"skip","(J)J")
J2CPP_DEFINE_METHOD(java::io::Reader,11,"read","(Ljava/nio/CharBuffer;)I")
J2CPP_DEFINE_FIELD(java::io::Reader,0,"lock","Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_READER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
