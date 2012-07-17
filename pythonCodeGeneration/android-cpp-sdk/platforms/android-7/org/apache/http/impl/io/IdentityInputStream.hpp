/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.IdentityInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_IDENTITYINPUTSTREAM_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_IDENTITYINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }


#include <java/io/Closeable.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class IdentityInputStream;
	class IdentityInputStream
		: public object<IdentityInputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit IdentityInputStream(jobject jobj)
		: object<IdentityInputStream>(jobj)
		{
		}

		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::lang::Object>() const;


		IdentityInputStream(local_ref< org::apache::http::io::SessionInputBuffer > const&);
		jint available();
		void close();
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
	}; //class IdentityInputStream

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_IDENTITYINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_IDENTITYINPUTSTREAM_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_IDENTITYINPUTSTREAM_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::IdentityInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

org::apache::http::impl::io::IdentityInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

org::apache::http::impl::io::IdentityInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::io::IdentityInputStream::IdentityInputStream(local_ref< org::apache::http::io::SessionInputBuffer > const &a0)
: object<org::apache::http::impl::io::IdentityInputStream>(
	call_new_object<
		org::apache::http::impl::io::IdentityInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jint org::apache::http::impl::io::IdentityInputStream::available()
{
	return call_method<
		org::apache::http::impl::io::IdentityInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

void org::apache::http::impl::io::IdentityInputStream::close()
{
	return call_method<
		org::apache::http::impl::io::IdentityInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

jint org::apache::http::impl::io::IdentityInputStream::read()
{
	return call_method<
		org::apache::http::impl::io::IdentityInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint org::apache::http::impl::io::IdentityInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::impl::io::IdentityInputStream::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::io::IdentityInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::IdentityInputStream,"org/apache/http/impl/io/IdentityInputStream")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::IdentityInputStream,0,"<init>","(Lorg/apache/http/io/SessionInputBuffer;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::IdentityInputStream,1,"available","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::IdentityInputStream,2,"close","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::IdentityInputStream,3,"read","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::IdentityInputStream,4,"read","([BII)I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_IDENTITYINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
