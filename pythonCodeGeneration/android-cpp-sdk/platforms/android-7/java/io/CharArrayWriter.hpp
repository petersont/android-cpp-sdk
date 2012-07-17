/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.CharArrayWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_CHARARRAYWRITER_HPP_DECL
#define J2CPP_JAVA_IO_CHARARRAYWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class CharArrayWriter;
	class CharArrayWriter
		: public object<CharArrayWriter>
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
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit CharArrayWriter(jobject jobj)
		: object<CharArrayWriter>(jobj)
		{
		}

		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Writer>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Appendable>() const;


		CharArrayWriter();
		CharArrayWriter(jint);
		void close();
		void flush();
		void reset();
		jint size();
		local_ref< array<jchar,1> > toCharArray();
		local_ref< java::lang::String > toString();
		void write(local_ref< array<jchar,1> >  const&, jint, jint);
		void write(jint);
		void write(local_ref< java::lang::String >  const&, jint, jint);
		void writeTo(local_ref< java::io::Writer >  const&);
		local_ref< java::io::CharArrayWriter > append(jchar);
		local_ref< java::io::CharArrayWriter > append(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::io::CharArrayWriter > append(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::io::Writer > append_1(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::io::Writer > append_1(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::io::Writer > append_1(jchar);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::Appendable > append_2(jchar);

	}; //class CharArrayWriter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_CHARARRAYWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_CHARARRAYWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_CHARARRAYWRITER_HPP_IMPL

namespace j2cpp {



java::io::CharArrayWriter::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::io::CharArrayWriter::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::CharArrayWriter::operator local_ref<java::io::Writer>() const
{
	return local_ref<java::io::Writer>(get_jobject());
}

java::io::CharArrayWriter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::CharArrayWriter::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}


java::io::CharArrayWriter::CharArrayWriter()
: object<java::io::CharArrayWriter>(
	call_new_object<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(0),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::io::CharArrayWriter::CharArrayWriter(jint a0)
: object<java::io::CharArrayWriter>(
	call_new_object<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(1),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void java::io::CharArrayWriter::close()
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(2),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::io::CharArrayWriter::flush()
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(3),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void java::io::CharArrayWriter::reset()
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(4),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

jint java::io::CharArrayWriter::size()
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(5),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

local_ref< array<jchar,1> > java::io::CharArrayWriter::toCharArray()
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(6),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array<jchar,1> >
	>(get_jobject());
}

local_ref< java::lang::String > java::io::CharArrayWriter::toString()
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(7),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::io::CharArrayWriter::write(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(8),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::CharArrayWriter::write(jint a0)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(9),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void java::io::CharArrayWriter::write(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(10),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::CharArrayWriter::writeTo(local_ref< java::io::Writer > const &a0)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(11),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

local_ref< java::io::CharArrayWriter > java::io::CharArrayWriter::append(jchar a0)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(12),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::io::CharArrayWriter >
	>(get_jobject(), a0);
}

local_ref< java::io::CharArrayWriter > java::io::CharArrayWriter::append(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(13),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::io::CharArrayWriter >
	>(get_jobject(), a0);
}

local_ref< java::io::CharArrayWriter > java::io::CharArrayWriter::append(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(14),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::io::CharArrayWriter >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::io::Writer > java::io::CharArrayWriter::append_1(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(15),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::io::Writer >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::io::Writer > java::io::CharArrayWriter::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(16),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::io::Writer >
	>(get_jobject(), a0);
}

local_ref< java::io::Writer > java::io::CharArrayWriter::append_1(jchar a0)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(17),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::io::Writer >
	>(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::io::CharArrayWriter::append_2(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(18),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Appendable > java::io::CharArrayWriter::append_2(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(19),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::io::CharArrayWriter::append_2(jchar a0)
{
	return call_method<
		java::io::CharArrayWriter::J2CPP_CLASS_NAME,
		java::io::CharArrayWriter::J2CPP_METHOD_NAME(20),
		java::io::CharArrayWriter::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(java::io::CharArrayWriter,"java/io/CharArrayWriter")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,3,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,4,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,5,"size","()I")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,6,"toCharArray","()[C")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,7,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,8,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,9,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,10,"write","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,11,"writeTo","(Ljava/io/Writer;)V")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,12,"append","(C)Ljava/io/CharArrayWriter;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,13,"append","(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,14,"append","(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,15,"append","(Ljava/lang/CharSequence;II)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,16,"append","(Ljava/lang/CharSequence;)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,17,"append","(C)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,18,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,19,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::CharArrayWriter,20,"append","(C)Ljava/lang/Appendable;")
J2CPP_DEFINE_FIELD(java::io::CharArrayWriter,0,"buf","[C")
J2CPP_DEFINE_FIELD(java::io::CharArrayWriter,1,"count","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_CHARARRAYWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
