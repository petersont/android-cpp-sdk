/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.params.DefaultedHttpParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_DEFAULTEDHTTPPARAMS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_DEFAULTEDHTTPPARAMS_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class AbstractHttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/params/AbstractHttpParams.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class DefaultedHttpParams;
	class DefaultedHttpParams
		: public object<DefaultedHttpParams>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit DefaultedHttpParams(jobject jobj)
		: object<DefaultedHttpParams>(jobj)
		{
		}

		operator local_ref<org::apache::http::params::HttpParams>() const;
		operator local_ref<org::apache::http::params::AbstractHttpParams>() const;
		operator local_ref<java::lang::Object>() const;


		DefaultedHttpParams(local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::params::HttpParams > const&);
		local_ref< org::apache::http::params::HttpParams > copy();
		local_ref< java::lang::Object > getParameter(local_ref< java::lang::String >  const&);
		jboolean removeParameter(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::params::HttpParams > setParameter(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< org::apache::http::params::HttpParams > getDefaults();
	}; //class DefaultedHttpParams

} //namespace params
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_DEFAULTEDHTTPPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_DEFAULTEDHTTPPARAMS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_DEFAULTEDHTTPPARAMS_HPP_IMPL

namespace j2cpp {



org::apache::http::params::DefaultedHttpParams::operator local_ref<org::apache::http::params::HttpParams>() const
{
	return local_ref<org::apache::http::params::HttpParams>(get_jobject());
}

org::apache::http::params::DefaultedHttpParams::operator local_ref<org::apache::http::params::AbstractHttpParams>() const
{
	return local_ref<org::apache::http::params::AbstractHttpParams>(get_jobject());
}

org::apache::http::params::DefaultedHttpParams::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::params::DefaultedHttpParams::DefaultedHttpParams(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
: object<org::apache::http::params::DefaultedHttpParams>(
	call_new_object<
		org::apache::http::params::DefaultedHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_NAME(0),
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< org::apache::http::params::HttpParams > org::apache::http::params::DefaultedHttpParams::copy()
{
	return call_method<
		org::apache::http::params::DefaultedHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_NAME(1),
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::params::DefaultedHttpParams::getParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::DefaultedHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_NAME(2),
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean org::apache::http::params::DefaultedHttpParams::removeParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::DefaultedHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_NAME(3),
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::DefaultedHttpParams::setParameter(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::params::DefaultedHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_NAME(4),
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::DefaultedHttpParams::getDefaults()
{
	return call_method<
		org::apache::http::params::DefaultedHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_NAME(5),
		org::apache::http::params::DefaultedHttpParams::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::params::DefaultedHttpParams,"org/apache/http/params/DefaultedHttpParams")
J2CPP_DEFINE_METHOD(org::apache::http::params::DefaultedHttpParams,0,"<init>","(Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::DefaultedHttpParams,1,"copy","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::DefaultedHttpParams,2,"getParameter","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::params::DefaultedHttpParams,3,"removeParameter","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::DefaultedHttpParams,4,"setParameter","(Ljava/lang/String;Ljava/lang/Object;)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::DefaultedHttpParams,5,"getDefaults","()Lorg/apache/http/params/HttpParams;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_DEFAULTEDHTTPPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
