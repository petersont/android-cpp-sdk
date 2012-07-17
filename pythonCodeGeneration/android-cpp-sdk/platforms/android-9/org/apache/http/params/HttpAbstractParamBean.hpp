/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.params.HttpAbstractParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPABSTRACTPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPABSTRACTPARAMBEAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class HttpAbstractParamBean;
	class HttpAbstractParamBean
		: public object<HttpAbstractParamBean>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)

		explicit HttpAbstractParamBean(jobject jobj)
		: object<HttpAbstractParamBean>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		HttpAbstractParamBean(local_ref< org::apache::http::params::HttpParams > const&);

	}; //class HttpAbstractParamBean

} //namespace params
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPABSTRACTPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPABSTRACTPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPABSTRACTPARAMBEAN_HPP_IMPL

namespace j2cpp {



org::apache::http::params::HttpAbstractParamBean::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::params::HttpAbstractParamBean::HttpAbstractParamBean(local_ref< org::apache::http::params::HttpParams > const &a0)
: object<org::apache::http::params::HttpAbstractParamBean>(
	call_new_object<
		org::apache::http::params::HttpAbstractParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpAbstractParamBean::J2CPP_METHOD_NAME(0),
		org::apache::http::params::HttpAbstractParamBean::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}




J2CPP_DEFINE_CLASS(org::apache::http::params::HttpAbstractParamBean,"org/apache/http/params/HttpAbstractParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpAbstractParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_FIELD(org::apache::http::params::HttpAbstractParamBean,0,"params","Lorg/apache/http/params/HttpParams;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPABSTRACTPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
