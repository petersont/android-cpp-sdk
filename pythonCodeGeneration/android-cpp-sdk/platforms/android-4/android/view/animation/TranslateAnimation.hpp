/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.animation.TranslateAnimation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION_HPP_DECL


namespace j2cpp { namespace android { namespace view { namespace animation { class Animation; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/animation/Animation.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class TranslateAnimation;
	class TranslateAnimation
		: public object<TranslateAnimation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit TranslateAnimation(jobject jobj)
		: object<TranslateAnimation>(jobj)
		{
		}

		operator local_ref<android::view::animation::Animation>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;


		TranslateAnimation(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		TranslateAnimation(jfloat, jfloat, jfloat, jfloat);
		TranslateAnimation(jint, jfloat, jint, jfloat, jint, jfloat, jint, jfloat);
		void initialize(jint, jint, jint, jint);
	}; //class TranslateAnimation

} //namespace animation
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION_HPP_IMPL

namespace j2cpp {



android::view::animation::TranslateAnimation::operator local_ref<android::view::animation::Animation>() const
{
	return local_ref<android::view::animation::Animation>(get_jobject());
}

android::view::animation::TranslateAnimation::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

android::view::animation::TranslateAnimation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::animation::TranslateAnimation::TranslateAnimation(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::view::animation::TranslateAnimation>(
	call_new_object<
		android::view::animation::TranslateAnimation::J2CPP_CLASS_NAME,
		android::view::animation::TranslateAnimation::J2CPP_METHOD_NAME(0),
		android::view::animation::TranslateAnimation::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::view::animation::TranslateAnimation::TranslateAnimation(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
: object<android::view::animation::TranslateAnimation>(
	call_new_object<
		android::view::animation::TranslateAnimation::J2CPP_CLASS_NAME,
		android::view::animation::TranslateAnimation::J2CPP_METHOD_NAME(1),
		android::view::animation::TranslateAnimation::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3)
)
{
}



android::view::animation::TranslateAnimation::TranslateAnimation(jint a0, jfloat a1, jint a2, jfloat a3, jint a4, jfloat a5, jint a6, jfloat a7)
: object<android::view::animation::TranslateAnimation>(
	call_new_object<
		android::view::animation::TranslateAnimation::J2CPP_CLASS_NAME,
		android::view::animation::TranslateAnimation::J2CPP_METHOD_NAME(2),
		android::view::animation::TranslateAnimation::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2, a3, a4, a5, a6, a7)
)
{
}



void android::view::animation::TranslateAnimation::initialize(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::view::animation::TranslateAnimation::J2CPP_CLASS_NAME,
		android::view::animation::TranslateAnimation::J2CPP_METHOD_NAME(4),
		android::view::animation::TranslateAnimation::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::view::animation::TranslateAnimation,"android/view/animation/TranslateAnimation")
J2CPP_DEFINE_METHOD(android::view::animation::TranslateAnimation,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::animation::TranslateAnimation,1,"<init>","(FFFF)V")
J2CPP_DEFINE_METHOD(android::view::animation::TranslateAnimation,2,"<init>","(IFIFIFIF)V")
J2CPP_DEFINE_METHOD(android::view::animation::TranslateAnimation,3,"applyTransformation","(FLandroid/view/animation/Transformation;)V")
J2CPP_DEFINE_METHOD(android::view::animation::TranslateAnimation,4,"initialize","(IIII)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
