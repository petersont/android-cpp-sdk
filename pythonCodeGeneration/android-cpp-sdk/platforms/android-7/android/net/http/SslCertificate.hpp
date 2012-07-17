/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.http.SslCertificate
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_DECL
#define J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace android { namespace net { namespace http { namespace SslCertificate_ { class DName; } } } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/net/http/SslCertificate.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/X509Certificate.hpp>


namespace j2cpp {

namespace android { namespace net { namespace http {

	class SslCertificate;
	namespace SslCertificate_ {

		class DName;
		class DName
			: public object<DName>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_FIELD(0)

			explicit DName(jobject jobj)
			: object<DName>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			DName(local_ref< android::net::http::SslCertificate > const&, local_ref< java::lang::String > const&);
			local_ref< java::lang::String > getDName();
			local_ref< java::lang::String > getCName();
			local_ref< java::lang::String > getOName();
			local_ref< java::lang::String > getUName();

		}; //class DName

	} //namespace SslCertificate_

	class SslCertificate
		: public object<SslCertificate>
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

		typedef SslCertificate_::DName DName;

		explicit SslCertificate(jobject jobj)
		: object<SslCertificate>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SslCertificate(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		SslCertificate(local_ref< java::security::cert::X509Certificate > const&);
		static local_ref< android::os::Bundle > saveState(local_ref< android::net::http::SslCertificate >  const&);
		static local_ref< android::net::http::SslCertificate > restoreState(local_ref< android::os::Bundle >  const&);
		local_ref< java::lang::String > getValidNotBefore();
		local_ref< java::lang::String > getValidNotAfter();
		local_ref< android::net::http::SslCertificate_::DName > getIssuedTo();
		local_ref< android::net::http::SslCertificate_::DName > getIssuedBy();
		local_ref< java::lang::String > toString();
	}; //class SslCertificate

} //namespace http
} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_IMPL
#define J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_IMPL

namespace j2cpp {




android::net::http::SslCertificate_::DName::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::net::http::SslCertificate_::DName::DName(local_ref< android::net::http::SslCertificate > const &a0, local_ref< java::lang::String > const &a1)
: object<android::net::http::SslCertificate_::DName>(
	call_new_object<
		android::net::http::SslCertificate_::DName::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_NAME(0),
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::lang::String > android::net::http::SslCertificate_::DName::getDName()
{
	return call_method<
		android::net::http::SslCertificate_::DName::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_NAME(1),
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::http::SslCertificate_::DName::getCName()
{
	return call_method<
		android::net::http::SslCertificate_::DName::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_NAME(2),
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::http::SslCertificate_::DName::getOName()
{
	return call_method<
		android::net::http::SslCertificate_::DName::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_NAME(3),
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::http::SslCertificate_::DName::getUName()
{
	return call_method<
		android::net::http::SslCertificate_::DName::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_NAME(4),
		android::net::http::SslCertificate_::DName::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(android::net::http::SslCertificate_::DName,"android/net/http/SslCertificate$DName")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,0,"<init>","(Landroid/net/http/SslCertificate;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,1,"getDName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,2,"getCName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,3,"getOName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate_::DName,4,"getUName","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::http::SslCertificate_::DName,0,"this$0","Landroid/net/http/SslCertificate;")



android::net::http::SslCertificate::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::net::http::SslCertificate::SslCertificate(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
: object<android::net::http::SslCertificate>(
	call_new_object<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(0),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}



android::net::http::SslCertificate::SslCertificate(local_ref< java::security::cert::X509Certificate > const &a0)
: object<android::net::http::SslCertificate>(
	call_new_object<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(1),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< android::os::Bundle > android::net::http::SslCertificate::saveState(local_ref< android::net::http::SslCertificate > const &a0)
{
	return call_static_method<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(2),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::os::Bundle >
	>(a0);
}

local_ref< android::net::http::SslCertificate > android::net::http::SslCertificate::restoreState(local_ref< android::os::Bundle > const &a0)
{
	return call_static_method<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(3),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::net::http::SslCertificate >
	>(a0);
}

local_ref< java::lang::String > android::net::http::SslCertificate::getValidNotBefore()
{
	return call_method<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(4),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::http::SslCertificate::getValidNotAfter()
{
	return call_method<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(5),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< android::net::http::SslCertificate_::DName > android::net::http::SslCertificate::getIssuedTo()
{
	return call_method<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(6),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::net::http::SslCertificate_::DName >
	>(get_jobject());
}

local_ref< android::net::http::SslCertificate_::DName > android::net::http::SslCertificate::getIssuedBy()
{
	return call_method<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(7),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::net::http::SslCertificate_::DName >
	>(get_jobject());
}

local_ref< java::lang::String > android::net::http::SslCertificate::toString()
{
	return call_method<
		android::net::http::SslCertificate::J2CPP_CLASS_NAME,
		android::net::http::SslCertificate::J2CPP_METHOD_NAME(8),
		android::net::http::SslCertificate::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::net::http::SslCertificate,"android/net/http/SslCertificate")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,1,"<init>","(Ljava/security/cert/X509Certificate;)V")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,2,"saveState","(Landroid/net/http/SslCertificate;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,3,"restoreState","(Landroid/os/Bundle;)Landroid/net/http/SslCertificate;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,4,"getValidNotBefore","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,5,"getValidNotAfter","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,6,"getIssuedTo","()Landroid/net/http/SslCertificate$DName;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,7,"getIssuedBy","()Landroid/net/http/SslCertificate$DName;")
J2CPP_DEFINE_METHOD(android::net::http::SslCertificate,8,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_HTTP_SSLCERTIFICATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
