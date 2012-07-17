/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.BaseKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class KeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class MetaKeyKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }


#include <android/text/Editable.hpp>
#include <android/text/method/KeyListener.hpp>
#include <android/text/method/MetaKeyKeyListener.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class BaseKeyListener;
	class BaseKeyListener
		: public object<BaseKeyListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit BaseKeyListener(jobject jobj)
		: object<BaseKeyListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::method::KeyListener>() const;
		operator local_ref<android::text::method::MetaKeyKeyListener>() const;


		BaseKeyListener();
		jboolean backspace(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyDown(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyOther(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, local_ref< android::view::KeyEvent >  const&);
	}; //class BaseKeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_IMPL

namespace j2cpp {



android::text::method::BaseKeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::method::BaseKeyListener::operator local_ref<android::text::method::KeyListener>() const
{
	return local_ref<android::text::method::KeyListener>(get_jobject());
}

android::text::method::BaseKeyListener::operator local_ref<android::text::method::MetaKeyKeyListener>() const
{
	return local_ref<android::text::method::MetaKeyKeyListener>(get_jobject());
}


android::text::method::BaseKeyListener::BaseKeyListener()
: object<android::text::method::BaseKeyListener>(
	call_new_object<
		android::text::method::BaseKeyListener::J2CPP_CLASS_NAME,
		android::text::method::BaseKeyListener::J2CPP_METHOD_NAME(0),
		android::text::method::BaseKeyListener::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean android::text::method::BaseKeyListener::backspace(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::BaseKeyListener::J2CPP_CLASS_NAME,
		android::text::method::BaseKeyListener::J2CPP_METHOD_NAME(1),
		android::text::method::BaseKeyListener::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean android::text::method::BaseKeyListener::onKeyDown(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::BaseKeyListener::J2CPP_CLASS_NAME,
		android::text::method::BaseKeyListener::J2CPP_METHOD_NAME(2),
		android::text::method::BaseKeyListener::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean android::text::method::BaseKeyListener::onKeyOther(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		android::text::method::BaseKeyListener::J2CPP_CLASS_NAME,
		android::text::method::BaseKeyListener::J2CPP_METHOD_NAME(3),
		android::text::method::BaseKeyListener::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::text::method::BaseKeyListener,"android/text/method/BaseKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::BaseKeyListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::BaseKeyListener,1,"backspace","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::BaseKeyListener,2,"onKeyDown","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::BaseKeyListener,3,"onKeyOther","(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
