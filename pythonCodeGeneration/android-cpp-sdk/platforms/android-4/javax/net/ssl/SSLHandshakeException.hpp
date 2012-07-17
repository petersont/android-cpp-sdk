/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.SSLHandshakeException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLException; } } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <javax/net/ssl/SSLException.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLHandshakeException;
	class SSLHandshakeException
		: public object<SSLHandshakeException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit SSLHandshakeException(jobject jobj)
		: object<SSLHandshakeException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::net::ssl::SSLException>() const;


		SSLHandshakeException(local_ref< java::lang::String > const&);
	}; //class SSLHandshakeException

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLHandshakeException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

javax::net::ssl::SSLHandshakeException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

javax::net::ssl::SSLHandshakeException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

javax::net::ssl::SSLHandshakeException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

javax::net::ssl::SSLHandshakeException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::net::ssl::SSLHandshakeException::operator local_ref<javax::net::ssl::SSLException>() const
{
	return local_ref<javax::net::ssl::SSLException>(get_jobject());
}


javax::net::ssl::SSLHandshakeException::SSLHandshakeException(local_ref< java::lang::String > const &a0)
: object<javax::net::ssl::SSLHandshakeException>(
	call_new_object<
		javax::net::ssl::SSLHandshakeException::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLHandshakeException::J2CPP_METHOD_NAME(0),
		javax::net::ssl::SSLHandshakeException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(javax::net::ssl::SSLHandshakeException,"javax/net/ssl/SSLHandshakeException")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLHandshakeException,0,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
