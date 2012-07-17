/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.params.BasicHttpParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_BASICHTTPPARAMS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_BASICHTTPPARAMS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class AbstractHttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/params/AbstractHttpParams.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class BasicHttpParams;
	class BasicHttpParams
		: public object<BasicHttpParams>
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

		explicit BasicHttpParams(jobject jobj)
		: object<BasicHttpParams>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<org::apache::http::params::AbstractHttpParams>() const;
		operator local_ref<org::apache::http::params::HttpParams>() const;


		BasicHttpParams();
		local_ref< java::lang::Object > getParameter(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::params::HttpParams > setParameter(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		jboolean removeParameter(local_ref< java::lang::String >  const&);
		void setParameters(local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::Object >  const&);
		jboolean isParameterSet(local_ref< java::lang::String >  const&);
		jboolean isParameterSetLocally(local_ref< java::lang::String >  const&);
		void clear();
		local_ref< org::apache::http::params::HttpParams > copy();
		local_ref< java::lang::Object > clone();
	}; //class BasicHttpParams

} //namespace params
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_BASICHTTPPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_BASICHTTPPARAMS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_BASICHTTPPARAMS_HPP_IMPL

namespace j2cpp {



org::apache::http::params::BasicHttpParams::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::params::BasicHttpParams::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::params::BasicHttpParams::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

org::apache::http::params::BasicHttpParams::operator local_ref<org::apache::http::params::AbstractHttpParams>() const
{
	return local_ref<org::apache::http::params::AbstractHttpParams>(get_jobject());
}

org::apache::http::params::BasicHttpParams::operator local_ref<org::apache::http::params::HttpParams>() const
{
	return local_ref<org::apache::http::params::HttpParams>(get_jobject());
}


org::apache::http::params::BasicHttpParams::BasicHttpParams()
: object<org::apache::http::params::BasicHttpParams>(
	call_new_object<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(0),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::lang::Object > org::apache::http::params::BasicHttpParams::getParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(1),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::BasicHttpParams::setParameter(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(2),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::params::BasicHttpParams::removeParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(3),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

void org::apache::http::params::BasicHttpParams::setParameters(local_ref< array< local_ref< java::lang::String >, 1> > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(4),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::params::BasicHttpParams::isParameterSet(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(5),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jboolean org::apache::http::params::BasicHttpParams::isParameterSetLocally(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(6),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

void org::apache::http::params::BasicHttpParams::clear()
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(7),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::params::BasicHttpParams::copy()
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(8),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::params::HttpParams >
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::params::BasicHttpParams::clone()
{
	return call_method<
		org::apache::http::params::BasicHttpParams::J2CPP_CLASS_NAME,
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_NAME(9),
		org::apache::http::params::BasicHttpParams::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::params::BasicHttpParams,"org/apache/http/params/BasicHttpParams")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,1,"getParameter","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,2,"setParameter","(Ljava/lang/String;Ljava/lang/Object;)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,3,"removeParameter","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,4,"setParameters","([java.lang.StringLjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,5,"isParameterSet","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,6,"isParameterSetLocally","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,7,"clear","()V")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,8,"copy","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,9,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::params::BasicHttpParams,10,"copyParams","(Lorg/apache/http/params/HttpParams;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_BASICHTTPPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
