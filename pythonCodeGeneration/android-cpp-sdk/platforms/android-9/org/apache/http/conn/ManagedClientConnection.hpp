/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.ManagedClientConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_MANAGEDCLIENTCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_MANAGEDCLIENTCONNECTION_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpInetConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ConnectionReleaseTrigger; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpClientConnection; } } } }


#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <javax/net/ssl/SSLSession.hpp>
#include <org/apache/http/HttpClientConnection.hpp>
#include <org/apache/http/HttpConnection.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/HttpInetConnection.hpp>
#include <org/apache/http/conn/ConnectionReleaseTrigger.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/params/HttpParams.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class ManagedClientConnection;
	class ManagedClientConnection
		: public object<ManagedClientConnection>
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

		explicit ManagedClientConnection(jobject jobj)
		: object<ManagedClientConnection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpInetConnection>() const;
		operator local_ref<org::apache::http::conn::ConnectionReleaseTrigger>() const;
		operator local_ref<org::apache::http::HttpConnection>() const;
		operator local_ref<org::apache::http::HttpClientConnection>() const;


		jboolean isSecure();
		local_ref< org::apache::http::conn::routing::HttpRoute > getRoute();
		local_ref< javax::net::ssl::SSLSession > getSSLSession();
		void open(local_ref< org::apache::http::conn::routing::HttpRoute >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&, local_ref< org::apache::http::params::HttpParams >  const&);
		void tunnelTarget(jboolean, local_ref< org::apache::http::params::HttpParams >  const&);
		void tunnelProxy(local_ref< org::apache::http::HttpHost >  const&, jboolean, local_ref< org::apache::http::params::HttpParams >  const&);
		void layerProtocol(local_ref< org::apache::http::protocol::HttpContext >  const&, local_ref< org::apache::http::params::HttpParams >  const&);
		void markReusable();
		void unmarkReusable();
		jboolean isMarkedReusable();
		void setState(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getState();
		void setIdleDuration(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
	}; //class ManagedClientConnection

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_MANAGEDCLIENTCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_MANAGEDCLIENTCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_MANAGEDCLIENTCONNECTION_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::ManagedClientConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::ManagedClientConnection::operator local_ref<org::apache::http::HttpInetConnection>() const
{
	return local_ref<org::apache::http::HttpInetConnection>(get_jobject());
}

org::apache::http::conn::ManagedClientConnection::operator local_ref<org::apache::http::conn::ConnectionReleaseTrigger>() const
{
	return local_ref<org::apache::http::conn::ConnectionReleaseTrigger>(get_jobject());
}

org::apache::http::conn::ManagedClientConnection::operator local_ref<org::apache::http::HttpConnection>() const
{
	return local_ref<org::apache::http::HttpConnection>(get_jobject());
}

org::apache::http::conn::ManagedClientConnection::operator local_ref<org::apache::http::HttpClientConnection>() const
{
	return local_ref<org::apache::http::HttpClientConnection>(get_jobject());
}

jboolean org::apache::http::conn::ManagedClientConnection::isSecure()
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject());
}

local_ref< org::apache::http::conn::routing::HttpRoute > org::apache::http::conn::ManagedClientConnection::getRoute()
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::conn::routing::HttpRoute >
	>(get_jobject());
}

local_ref< javax::net::ssl::SSLSession > org::apache::http::conn::ManagedClientConnection::getSSLSession()
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::net::ssl::SSLSession >
	>(get_jobject());
}

void org::apache::http::conn::ManagedClientConnection::open(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1, local_ref< org::apache::http::params::HttpParams > const &a2)
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::conn::ManagedClientConnection::tunnelTarget(jboolean a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::conn::ManagedClientConnection::tunnelProxy(local_ref< org::apache::http::HttpHost > const &a0, jboolean a1, local_ref< org::apache::http::params::HttpParams > const &a2)
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::conn::ManagedClientConnection::layerProtocol(local_ref< org::apache::http::protocol::HttpContext > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::conn::ManagedClientConnection::markReusable()
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(7),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

void org::apache::http::conn::ManagedClientConnection::unmarkReusable()
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(8),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

jboolean org::apache::http::conn::ManagedClientConnection::isMarkedReusable()
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(9),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

void org::apache::http::conn::ManagedClientConnection::setState(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(10),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > org::apache::http::conn::ManagedClientConnection::getState()
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(11),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

void org::apache::http::conn::ManagedClientConnection::setIdleDuration(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		org::apache::http::conn::ManagedClientConnection::J2CPP_CLASS_NAME,
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_NAME(12),
		org::apache::http::conn::ManagedClientConnection::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ManagedClientConnection,"org/apache/http/conn/ManagedClientConnection")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,0,"isSecure","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,1,"getRoute","()Lorg/apache/http/conn/routing/HttpRoute;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,2,"getSSLSession","()Ljavax/net/ssl/SSLSession;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,3,"open","(Lorg/apache/http/conn/routing/HttpRoute;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,4,"tunnelTarget","(ZLorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,5,"tunnelProxy","(Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,6,"layerProtocol","(Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,7,"markReusable","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,8,"unmarkReusable","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,9,"isMarkedReusable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,10,"setState","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,11,"getState","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ManagedClientConnection,12,"setIdleDuration","(JLjava/util/concurrent/TimeUnit;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_MANAGEDCLIENTCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
