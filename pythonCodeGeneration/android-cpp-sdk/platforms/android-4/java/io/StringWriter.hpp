/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.StringWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_STRINGWRITER_HPP_DECL
#define J2CPP_JAVA_IO_STRINGWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>


namespace j2cpp {

namespace java { namespace io {

	class StringWriter;
	class StringWriter
		: public object<StringWriter>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)

		explicit StringWriter(jobject jobj)
		: object<StringWriter>(jobj)
		{
		}

		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::Writer>() const;
		operator local_ref<java::lang::Appendable>() const;
		operator local_ref<java::lang::Object>() const;


		StringWriter();
		StringWriter(jint);
		void close();
		void flush();
		local_ref< java::lang::StringBuffer > getBuffer();
		local_ref< java::lang::String > toString();
		void write(local_ref< array<jchar,1> >  const&, jint, jint);
		void write(jint);
		void write(local_ref< java::lang::String >  const&);
		void write(local_ref< java::lang::String >  const&, jint, jint);
		local_ref< java::io::StringWriter > append(jchar);
		local_ref< java::io::StringWriter > append(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::io::StringWriter > append(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::io::Writer > append_1(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::io::Writer > append_1(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::io::Writer > append_1(jchar);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::Appendable > append_2(jchar);
	}; //class StringWriter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_STRINGWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_STRINGWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_STRINGWRITER_HPP_IMPL

namespace j2cpp {



java::io::StringWriter::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::StringWriter::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::io::StringWriter::operator local_ref<java::io::Writer>() const
{
	return local_ref<java::io::Writer>(get_jobject());
}

java::io::StringWriter::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}

java::io::StringWriter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::io::StringWriter::StringWriter()
: object<java::io::StringWriter>(
	call_new_object<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(0),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::io::StringWriter::StringWriter(jint a0)
: object<java::io::StringWriter>(
	call_new_object<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(1),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void java::io::StringWriter::close()
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(2),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::io::StringWriter::flush()
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(3),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

local_ref< java::lang::StringBuffer > java::io::StringWriter::getBuffer()
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(4),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::StringBuffer >
	>(get_jobject());
}

local_ref< java::lang::String > java::io::StringWriter::toString()
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(5),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::io::StringWriter::write(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(6),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::StringWriter::write(jint a0)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(7),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void java::io::StringWriter::write(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(8),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void java::io::StringWriter::write(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(9),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::io::StringWriter > java::io::StringWriter::append(jchar a0)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(10),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::io::StringWriter >
	>(get_jobject(), a0);
}

local_ref< java::io::StringWriter > java::io::StringWriter::append(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(11),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::io::StringWriter >
	>(get_jobject(), a0);
}

local_ref< java::io::StringWriter > java::io::StringWriter::append(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(12),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::io::StringWriter >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::io::Writer > java::io::StringWriter::append_1(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(13),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::io::Writer >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::io::Writer > java::io::StringWriter::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(14),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::io::Writer >
	>(get_jobject(), a0);
}

local_ref< java::io::Writer > java::io::StringWriter::append_1(jchar a0)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(15),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::io::Writer >
	>(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::io::StringWriter::append_2(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(16),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Appendable > java::io::StringWriter::append_2(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(17),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::io::StringWriter::append_2(jchar a0)
{
	return call_method<
		java::io::StringWriter::J2CPP_CLASS_NAME,
		java::io::StringWriter::J2CPP_METHOD_NAME(18),
		java::io::StringWriter::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::StringWriter,"java/io/StringWriter")
J2CPP_DEFINE_METHOD(java::io::StringWriter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::StringWriter,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::io::StringWriter,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::StringWriter,3,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::StringWriter,4,"getBuffer","()Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,6,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::StringWriter,7,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::StringWriter,8,"write","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::StringWriter,9,"write","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(java::io::StringWriter,10,"append","(C)Ljava/io/StringWriter;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,11,"append","(Ljava/lang/CharSequence;)Ljava/io/StringWriter;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,12,"append","(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,13,"append","(Ljava/lang/CharSequence;II)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,14,"append","(Ljava/lang/CharSequence;)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,15,"append","(C)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,16,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,17,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::StringWriter,18,"append","(C)Ljava/lang/Appendable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_STRINGWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
