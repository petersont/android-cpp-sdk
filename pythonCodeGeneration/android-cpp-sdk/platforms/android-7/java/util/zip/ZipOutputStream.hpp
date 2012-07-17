/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.ZipOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class FilterOutputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class DeflaterOutputStream; } } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipEntry; } } } }


#include <java/io/Closeable.hpp>
#include <java/io/FilterOutputStream.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/zip/DeflaterOutputStream.hpp>
#include <java/util/zip/ZipEntry.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class ZipOutputStream;
	class ZipOutputStream
		: public object<ZipOutputStream>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit ZipOutputStream(jobject jobj)
		: object<ZipOutputStream>(jobj)
		{
		}

		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::FilterOutputStream>() const;
		operator local_ref<java::io::OutputStream>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::zip::DeflaterOutputStream>() const;


		ZipOutputStream(local_ref< java::io::OutputStream > const&);
		void close();
		void closeEntry();
		void finish();
		void putNextEntry(local_ref< java::util::zip::ZipEntry >  const&);
		void setComment(local_ref< java::lang::String >  const&);
		void setLevel(jint);
		void setMethod(jint);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFLATED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > STORED;
	}; //class ZipOutputStream

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::util::zip::ZipOutputStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::util::zip::ZipOutputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::util::zip::ZipOutputStream::operator local_ref<java::io::FilterOutputStream>() const
{
	return local_ref<java::io::FilterOutputStream>(get_jobject());
}

java::util::zip::ZipOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}

java::util::zip::ZipOutputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::zip::ZipOutputStream::operator local_ref<java::util::zip::DeflaterOutputStream>() const
{
	return local_ref<java::util::zip::DeflaterOutputStream>(get_jobject());
}


java::util::zip::ZipOutputStream::ZipOutputStream(local_ref< java::io::OutputStream > const &a0)
: object<java::util::zip::ZipOutputStream>(
	call_new_object<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(0),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void java::util::zip::ZipOutputStream::close()
{
	return call_method<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(1),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void java::util::zip::ZipOutputStream::closeEntry()
{
	return call_method<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(2),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::util::zip::ZipOutputStream::finish()
{
	return call_method<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(3),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void java::util::zip::ZipOutputStream::putNextEntry(local_ref< java::util::zip::ZipEntry > const &a0)
{
	return call_method<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(4),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipOutputStream::setComment(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(5),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipOutputStream::setLevel(jint a0)
{
	return call_method<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(6),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipOutputStream::setMethod(jint a0)
{
	return call_method<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(7),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::ZipOutputStream::J2CPP_METHOD_NAME(8),
		java::util::zip::ZipOutputStream::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}


static_field<
	java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
	java::util::zip::ZipOutputStream::J2CPP_FIELD_NAME(0),
	java::util::zip::ZipOutputStream::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::util::zip::ZipOutputStream::DEFLATED;

static_field<
	java::util::zip::ZipOutputStream::J2CPP_CLASS_NAME,
	java::util::zip::ZipOutputStream::J2CPP_FIELD_NAME(1),
	java::util::zip::ZipOutputStream::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::util::zip::ZipOutputStream::STORED;


J2CPP_DEFINE_CLASS(java::util::zip::ZipOutputStream,"java/util/zip/ZipOutputStream")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,1,"close","()V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,2,"closeEntry","()V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,3,"finish","()V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,4,"putNextEntry","(Ljava/util/zip/ZipEntry;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,5,"setComment","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,6,"setLevel","(I)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,7,"setMethod","(I)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipOutputStream,8,"write","([BII)V")
J2CPP_DEFINE_FIELD(java::util::zip::ZipOutputStream,0,"DEFLATED","I")
J2CPP_DEFINE_FIELD(java::util::zip::ZipOutputStream,1,"STORED","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
