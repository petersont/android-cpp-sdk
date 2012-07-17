/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.WebViewClient
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Message; } } }
namespace j2cpp { namespace android { namespace webkit { class WebView; } } }
namespace j2cpp { namespace android { namespace webkit { class HttpAuthHandler; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }


#include <android/graphics/Bitmap.hpp>
#include <android/os/Message.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/webkit/HttpAuthHandler.hpp>
#include <android/webkit/WebView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebViewClient;
	class WebViewClient
		: public object<WebViewClient>
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

		explicit WebViewClient(jobject jobj)
		: object<WebViewClient>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		WebViewClient();
		jboolean shouldOverrideUrlLoading(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&);
		void onPageStarted(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, local_ref< android::graphics::Bitmap >  const&);
		void onPageFinished(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&);
		void onLoadResource(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&);
		void onTooManyRedirects(local_ref< android::webkit::WebView >  const&, local_ref< android::os::Message >  const&, local_ref< android::os::Message >  const&);
		void onReceivedError(local_ref< android::webkit::WebView >  const&, jint, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void onFormResubmission(local_ref< android::webkit::WebView >  const&, local_ref< android::os::Message >  const&, local_ref< android::os::Message >  const&);
		void doUpdateVisitedHistory(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, jboolean);
		void onReceivedHttpAuthRequest(local_ref< android::webkit::WebView >  const&, local_ref< android::webkit::HttpAuthHandler >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jboolean shouldOverrideKeyEvent(local_ref< android::webkit::WebView >  const&, local_ref< android::view::KeyEvent >  const&);
		void onUnhandledKeyEvent(local_ref< android::webkit::WebView >  const&, local_ref< android::view::KeyEvent >  const&);
		void onScaleChanged(local_ref< android::webkit::WebView >  const&, jfloat, jfloat);
	}; //class WebViewClient

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_IMPL

namespace j2cpp {



android::webkit::WebViewClient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::webkit::WebViewClient::WebViewClient()
: object<android::webkit::WebViewClient>(
	call_new_object<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(0),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean android::webkit::WebViewClient::shouldOverrideUrlLoading(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(1),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onPageStarted(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::graphics::Bitmap > const &a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(2),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::webkit::WebViewClient::onPageFinished(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(3),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onLoadResource(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(4),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onTooManyRedirects(local_ref< android::webkit::WebView > const &a0, local_ref< android::os::Message > const &a1, local_ref< android::os::Message > const &a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(5),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::webkit::WebViewClient::onReceivedError(local_ref< android::webkit::WebView > const &a0, jint a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(6),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::webkit::WebViewClient::onFormResubmission(local_ref< android::webkit::WebView > const &a0, local_ref< android::os::Message > const &a1, local_ref< android::os::Message > const &a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(7),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::webkit::WebViewClient::doUpdateVisitedHistory(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, jboolean a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(8),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::webkit::WebViewClient::onReceivedHttpAuthRequest(local_ref< android::webkit::WebView > const &a0, local_ref< android::webkit::HttpAuthHandler > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(9),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean android::webkit::WebViewClient::shouldOverrideKeyEvent(local_ref< android::webkit::WebView > const &a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(10),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onUnhandledKeyEvent(local_ref< android::webkit::WebView > const &a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(11),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onScaleChanged(local_ref< android::webkit::WebView > const &a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(12),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::webkit::WebViewClient,"android/webkit/WebViewClient")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,1,"shouldOverrideUrlLoading","(Landroid/webkit/WebView;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,2,"onPageStarted","(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,3,"onPageFinished","(Landroid/webkit/WebView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,4,"onLoadResource","(Landroid/webkit/WebView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,5,"onTooManyRedirects","(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,6,"onReceivedError","(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,7,"onFormResubmission","(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,8,"doUpdateVisitedHistory","(Landroid/webkit/WebView;Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,9,"onReceivedHttpAuthRequest","(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,10,"shouldOverrideKeyEvent","(Landroid/webkit/WebView;Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,11,"onUnhandledKeyEvent","(Landroid/webkit/WebView;Landroid/view/KeyEvent;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,12,"onScaleChanged","(Landroid/webkit/WebView;FF)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
