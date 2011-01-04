/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.protocol.HttpProcessor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequestInterceptor; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponseInterceptor; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpRequestInterceptor.hpp>
#include <org/apache/http/HttpResponseInterceptor.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpProcessor;
	class HttpProcessor
		: public object<HttpProcessor>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit HttpProcessor(jobject jobj)
		: object<HttpProcessor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpRequestInterceptor>() const;
		operator local_ref<org::apache::http::HttpResponseInterceptor>() const;

	}; //class HttpProcessor

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::HttpProcessor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::protocol::HttpProcessor::operator local_ref<org::apache::http::HttpRequestInterceptor>() const
{
	return local_ref<org::apache::http::HttpRequestInterceptor>(get_jobject());
}

org::apache::http::protocol::HttpProcessor::operator local_ref<org::apache::http::HttpResponseInterceptor>() const
{
	return local_ref<org::apache::http::HttpResponseInterceptor>(get_jobject());
}

J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpProcessor,"org/apache/http/protocol/HttpProcessor")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPPROCESSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION