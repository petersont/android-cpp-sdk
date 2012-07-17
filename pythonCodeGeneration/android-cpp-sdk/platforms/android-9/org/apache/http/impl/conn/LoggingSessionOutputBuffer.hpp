/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.LoggingSessionOutputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONOUTPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONOUTPUTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { class Wire; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/impl/conn/Wire.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>
#include <org/apache/http/io/SessionOutputBuffer.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class LoggingSessionOutputBuffer;
	class LoggingSessionOutputBuffer
		: public object<LoggingSessionOutputBuffer>
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

		explicit LoggingSessionOutputBuffer(jobject jobj)
		: object<LoggingSessionOutputBuffer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::io::SessionOutputBuffer>() const;


		LoggingSessionOutputBuffer(local_ref< org::apache::http::io::SessionOutputBuffer > const&, local_ref< org::apache::http::impl::conn::Wire > const&);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void write(jint);
		void write(local_ref< array<jbyte,1> >  const&);
		void flush();
		void writeLine(local_ref< org::apache::http::util::CharArrayBuffer >  const&);
		void writeLine(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::io::HttpTransportMetrics > getMetrics();
	}; //class LoggingSessionOutputBuffer

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONOUTPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONOUTPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONOUTPUTBUFFER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::LoggingSessionOutputBuffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::conn::LoggingSessionOutputBuffer::operator local_ref<org::apache::http::io::SessionOutputBuffer>() const
{
	return local_ref<org::apache::http::io::SessionOutputBuffer>(get_jobject());
}


org::apache::http::impl::conn::LoggingSessionOutputBuffer::LoggingSessionOutputBuffer(local_ref< org::apache::http::io::SessionOutputBuffer > const &a0, local_ref< org::apache::http::impl::conn::Wire > const &a1)
: object<org::apache::http::impl::conn::LoggingSessionOutputBuffer>(
	call_new_object<
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


void org::apache::http::impl::conn::LoggingSessionOutputBuffer::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::write(jint a0)
{
	return call_method<
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::write(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::flush()
{
	return call_method<
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::writeLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::writeLine(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

local_ref< org::apache::http::io::HttpTransportMetrics > org::apache::http::impl::conn::LoggingSessionOutputBuffer::getMetrics()
{
	return call_method<
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::conn::LoggingSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::apache::http::io::HttpTransportMetrics >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::LoggingSessionOutputBuffer,"org/apache/http/impl/conn/LoggingSessionOutputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionOutputBuffer,0,"<init>","(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/impl/conn/Wire;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionOutputBuffer,1,"write","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionOutputBuffer,2,"write","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionOutputBuffer,3,"write","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionOutputBuffer,4,"flush","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionOutputBuffer,5,"writeLine","(Lorg/apache/http/util/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionOutputBuffer,6,"writeLine","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionOutputBuffer,7,"getMetrics","()Lorg/apache/http/io/HttpTransportMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONOUTPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
