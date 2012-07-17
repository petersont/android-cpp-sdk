/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.GZIPOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class FilterOutputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class DeflaterOutputStream; } } } }


#include <java/io/Closeable.hpp>
#include <java/io/FilterOutputStream.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/util/zip/DeflaterOutputStream.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class GZIPOutputStream;
	class GZIPOutputStream
		: public object<GZIPOutputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		explicit GZIPOutputStream(jobject jobj)
		: object<GZIPOutputStream>(jobj)
		{
		}

		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::FilterOutputStream>() const;
		operator local_ref<java::io::OutputStream>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::zip::DeflaterOutputStream>() const;


		GZIPOutputStream(local_ref< java::io::OutputStream > const&);
		GZIPOutputStream(local_ref< java::io::OutputStream > const&, jint);
		void finish();
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);

	}; //class GZIPOutputStream

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::util::zip::GZIPOutputStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::util::zip::GZIPOutputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::util::zip::GZIPOutputStream::operator local_ref<java::io::FilterOutputStream>() const
{
	return local_ref<java::io::FilterOutputStream>(get_jobject());
}

java::util::zip::GZIPOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}

java::util::zip::GZIPOutputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::zip::GZIPOutputStream::operator local_ref<java::util::zip::DeflaterOutputStream>() const
{
	return local_ref<java::util::zip::DeflaterOutputStream>(get_jobject());
}


java::util::zip::GZIPOutputStream::GZIPOutputStream(local_ref< java::io::OutputStream > const &a0)
: object<java::util::zip::GZIPOutputStream>(
	call_new_object<
		java::util::zip::GZIPOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::GZIPOutputStream::J2CPP_METHOD_NAME(0),
		java::util::zip::GZIPOutputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::util::zip::GZIPOutputStream::GZIPOutputStream(local_ref< java::io::OutputStream > const &a0, jint a1)
: object<java::util::zip::GZIPOutputStream>(
	call_new_object<
		java::util::zip::GZIPOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::GZIPOutputStream::J2CPP_METHOD_NAME(1),
		java::util::zip::GZIPOutputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


void java::util::zip::GZIPOutputStream::finish()
{
	return call_method<
		java::util::zip::GZIPOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::GZIPOutputStream::J2CPP_METHOD_NAME(2),
		java::util::zip::GZIPOutputStream::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::util::zip::GZIPOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::GZIPOutputStream::J2CPP_CLASS_NAME,
		java::util::zip::GZIPOutputStream::J2CPP_METHOD_NAME(3),
		java::util::zip::GZIPOutputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}



J2CPP_DEFINE_CLASS(java::util::zip::GZIPOutputStream,"java/util/zip/GZIPOutputStream")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPOutputStream,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPOutputStream,1,"<init>","(Ljava/io/OutputStream;I)V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPOutputStream,2,"finish","()V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPOutputStream,3,"write","([BII)V")
J2CPP_DEFINE_FIELD(java::util::zip::GZIPOutputStream,0,"crc","Ljava/util/zip/CRC32;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
