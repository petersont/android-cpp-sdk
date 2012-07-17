/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.ReasonPhraseCatalog
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_REASONPHRASECATALOG_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_REASONPHRASECATALOG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class ReasonPhraseCatalog;
	class ReasonPhraseCatalog
		: public object<ReasonPhraseCatalog>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ReasonPhraseCatalog(jobject jobj)
		: object<ReasonPhraseCatalog>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getReason(jint, local_ref< java::util::Locale >  const&);
	}; //class ReasonPhraseCatalog

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_REASONPHRASECATALOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_REASONPHRASECATALOG_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_REASONPHRASECATALOG_HPP_IMPL

namespace j2cpp {



org::apache::http::ReasonPhraseCatalog::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::ReasonPhraseCatalog::getReason(jint a0, local_ref< java::util::Locale > const &a1)
{
	return call_method<
		org::apache::http::ReasonPhraseCatalog::J2CPP_CLASS_NAME,
		org::apache::http::ReasonPhraseCatalog::J2CPP_METHOD_NAME(0),
		org::apache::http::ReasonPhraseCatalog::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::ReasonPhraseCatalog,"org/apache/http/ReasonPhraseCatalog")
J2CPP_DEFINE_METHOD(org::apache::http::ReasonPhraseCatalog,0,"getReason","(ILjava/util/Locale;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_REASONPHRASECATALOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
