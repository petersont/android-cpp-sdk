/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.AbsSeekBar
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ABSSEEKBAR_HPP_DECL
#define J2CPP_ANDROID_WIDGET_ABSSEEKBAR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace widget { class ProgressBar; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/ProgressBar.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class AbsSeekBar;
	class AbsSeekBar
		: public object<AbsSeekBar>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)

		explicit AbsSeekBar(jobject jobj)
		: object<AbsSeekBar>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::widget::ProgressBar>() const;


		AbsSeekBar(local_ref< android::content::Context > const&);
		AbsSeekBar(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		AbsSeekBar(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void setThumb(local_ref< android::graphics::drawable::Drawable >  const&);
		jint getThumbOffset();
		void setThumbOffset(jint);
		void setKeyProgressIncrement(jint);
		jint getKeyProgressIncrement();
		void setMax(jint);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jboolean onKeyDown(jint, local_ref< android::view::KeyEvent >  const&);
	}; //class AbsSeekBar

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ABSSEEKBAR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ABSSEEKBAR_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_ABSSEEKBAR_HPP_IMPL

namespace j2cpp {



android::widget::AbsSeekBar::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::AbsSeekBar::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::AbsSeekBar::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::AbsSeekBar::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::AbsSeekBar::operator local_ref<android::widget::ProgressBar>() const
{
	return local_ref<android::widget::ProgressBar>(get_jobject());
}


android::widget::AbsSeekBar::AbsSeekBar(local_ref< android::content::Context > const &a0)
: object<android::widget::AbsSeekBar>(
	call_new_object<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(0),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::AbsSeekBar::AbsSeekBar(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::AbsSeekBar>(
	call_new_object<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(1),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::AbsSeekBar::AbsSeekBar(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::AbsSeekBar>(
	call_new_object<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(2),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


void android::widget::AbsSeekBar::setThumb(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(3),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

jint android::widget::AbsSeekBar::getThumbOffset()
{
	return call_method<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(4),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

void android::widget::AbsSeekBar::setThumbOffset(jint a0)
{
	return call_method<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(5),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::widget::AbsSeekBar::setKeyProgressIncrement(jint a0)
{
	return call_method<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(6),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jint android::widget::AbsSeekBar::getKeyProgressIncrement()
{
	return call_method<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(7),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

void android::widget::AbsSeekBar::setMax(jint a0)
{
	return call_method<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(8),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}






jboolean android::widget::AbsSeekBar::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(14),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::widget::AbsSeekBar::onKeyDown(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::AbsSeekBar::J2CPP_CLASS_NAME,
		android::widget::AbsSeekBar::J2CPP_METHOD_NAME(15),
		android::widget::AbsSeekBar::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::widget::AbsSeekBar,"android/widget/AbsSeekBar")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,3,"setThumb","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,4,"getThumbOffset","()I")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,5,"setThumbOffset","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,6,"setKeyProgressIncrement","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,7,"getKeyProgressIncrement","()I")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,8,"setMax","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,9,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,10,"drawableStateChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,11,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,12,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,13,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,14,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::AbsSeekBar,15,"onKeyDown","(ILandroid/view/KeyEvent;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ABSSEEKBAR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
