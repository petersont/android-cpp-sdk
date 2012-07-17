/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.EntityEnclosingRequestWrapper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ENTITYENCLOSINGREQUESTWRAPPER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ENTITYENCLOSINGREQUESTWRAPPER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace client { class RequestWrapper; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpUriRequest; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class AbstractHttpMessage; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/HttpEntityEnclosingRequest.hpp>
#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/client/methods/HttpUriRequest.hpp>
#include <org/apache/http/impl/client/RequestWrapper.hpp>
#include <org/apache/http/message/AbstractHttpMessage.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class EntityEnclosingRequestWrapper;
	class EntityEnclosingRequestWrapper
		: public object<EntityEnclosingRequestWrapper>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit EntityEnclosingRequestWrapper(jobject jobj)
		: object<EntityEnclosingRequestWrapper>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpEntityEnclosingRequest>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::impl::client::RequestWrapper>() const;
		operator local_ref<org::apache::http::client::methods::HttpUriRequest>() const;
		operator local_ref<org::apache::http::HttpRequest>() const;
		operator local_ref<org::apache::http::message::AbstractHttpMessage>() const;
		operator local_ref<org::apache::http::HttpMessage>() const;


		EntityEnclosingRequestWrapper(local_ref< org::apache::http::HttpEntityEnclosingRequest > const&);
		local_ref< org::apache::http::HttpEntity > getEntity();
		void setEntity(local_ref< org::apache::http::HttpEntity >  const&);
		jboolean expectContinue();
		jboolean isRepeatable();
	}; //class EntityEnclosingRequestWrapper

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ENTITYENCLOSINGREQUESTWRAPPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ENTITYENCLOSINGREQUESTWRAPPER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ENTITYENCLOSINGREQUESTWRAPPER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::EntityEnclosingRequestWrapper::operator local_ref<org::apache::http::HttpEntityEnclosingRequest>() const
{
	return local_ref<org::apache::http::HttpEntityEnclosingRequest>(get_jobject());
}

org::apache::http::impl::client::EntityEnclosingRequestWrapper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::client::EntityEnclosingRequestWrapper::operator local_ref<org::apache::http::impl::client::RequestWrapper>() const
{
	return local_ref<org::apache::http::impl::client::RequestWrapper>(get_jobject());
}

org::apache::http::impl::client::EntityEnclosingRequestWrapper::operator local_ref<org::apache::http::client::methods::HttpUriRequest>() const
{
	return local_ref<org::apache::http::client::methods::HttpUriRequest>(get_jobject());
}

org::apache::http::impl::client::EntityEnclosingRequestWrapper::operator local_ref<org::apache::http::HttpRequest>() const
{
	return local_ref<org::apache::http::HttpRequest>(get_jobject());
}

org::apache::http::impl::client::EntityEnclosingRequestWrapper::operator local_ref<org::apache::http::message::AbstractHttpMessage>() const
{
	return local_ref<org::apache::http::message::AbstractHttpMessage>(get_jobject());
}

org::apache::http::impl::client::EntityEnclosingRequestWrapper::operator local_ref<org::apache::http::HttpMessage>() const
{
	return local_ref<org::apache::http::HttpMessage>(get_jobject());
}


org::apache::http::impl::client::EntityEnclosingRequestWrapper::EntityEnclosingRequestWrapper(local_ref< org::apache::http::HttpEntityEnclosingRequest > const &a0)
: object<org::apache::http::impl::client::EntityEnclosingRequestWrapper>(
	call_new_object<
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< org::apache::http::HttpEntity > org::apache::http::impl::client::EntityEnclosingRequestWrapper::getEntity()
{
	return call_method<
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::HttpEntity >
	>(get_jobject());
}

void org::apache::http::impl::client::EntityEnclosingRequestWrapper::setEntity(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return call_method<
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jboolean org::apache::http::impl::client::EntityEnclosingRequestWrapper::expectContinue()
{
	return call_method<
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

jboolean org::apache::http::impl::client::EntityEnclosingRequestWrapper::isRepeatable()
{
	return call_method<
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::client::EntityEnclosingRequestWrapper::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::EntityEnclosingRequestWrapper,"org/apache/http/impl/client/EntityEnclosingRequestWrapper")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::EntityEnclosingRequestWrapper,0,"<init>","(Lorg/apache/http/HttpEntityEnclosingRequest;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::EntityEnclosingRequestWrapper,1,"getEntity","()Lorg/apache/http/HttpEntity;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::EntityEnclosingRequestWrapper,2,"setEntity","(Lorg/apache/http/HttpEntity;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::EntityEnclosingRequestWrapper,3,"expectContinue","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::EntityEnclosingRequestWrapper,4,"isRepeatable","()Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_ENTITYENCLOSINGREQUESTWRAPPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
