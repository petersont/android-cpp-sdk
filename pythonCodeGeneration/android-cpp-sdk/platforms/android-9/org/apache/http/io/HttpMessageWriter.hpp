/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.io.HttpMessageWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpMessage.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace io {

	class HttpMessageWriter;
	class HttpMessageWriter
		: public object<HttpMessageWriter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit HttpMessageWriter(jobject jobj)
		: object<HttpMessageWriter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void write(local_ref< org::apache::http::HttpMessage >  const&);
	}; //class HttpMessageWriter

} //namespace io
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_HPP_IMPL

namespace j2cpp {



org::apache::http::io::HttpMessageWriter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::apache::http::io::HttpMessageWriter::write(local_ref< org::apache::http::HttpMessage > const &a0)
{
	return call_method<
		org::apache::http::io::HttpMessageWriter::J2CPP_CLASS_NAME,
		org::apache::http::io::HttpMessageWriter::J2CPP_METHOD_NAME(0),
		org::apache::http::io::HttpMessageWriter::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::io::HttpMessageWriter,"org/apache/http/io/HttpMessageWriter")
J2CPP_DEFINE_METHOD(org::apache::http::io::HttpMessageWriter,0,"write","(Lorg/apache/http/HttpMessage;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_HTTPMESSAGEWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
