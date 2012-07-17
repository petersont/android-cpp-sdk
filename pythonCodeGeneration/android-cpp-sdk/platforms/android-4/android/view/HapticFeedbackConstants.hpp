/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.HapticFeedbackConstants
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_HPP_DECL
#define J2CPP_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class HapticFeedbackConstants;
	class HapticFeedbackConstants
		: public object<HapticFeedbackConstants>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit HapticFeedbackConstants(jobject jobj)
		: object<HapticFeedbackConstants>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;



		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > LONG_PRESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > FLAG_IGNORE_VIEW_SETTING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > FLAG_IGNORE_GLOBAL_SETTING;
	}; //class HapticFeedbackConstants

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_HPP_IMPL
#define J2CPP_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_HPP_IMPL

namespace j2cpp {



android::view::HapticFeedbackConstants::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



static_field<
	android::view::HapticFeedbackConstants::J2CPP_CLASS_NAME,
	android::view::HapticFeedbackConstants::J2CPP_FIELD_NAME(0),
	android::view::HapticFeedbackConstants::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::HapticFeedbackConstants::LONG_PRESS;

static_field<
	android::view::HapticFeedbackConstants::J2CPP_CLASS_NAME,
	android::view::HapticFeedbackConstants::J2CPP_FIELD_NAME(1),
	android::view::HapticFeedbackConstants::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::HapticFeedbackConstants::FLAG_IGNORE_VIEW_SETTING;

static_field<
	android::view::HapticFeedbackConstants::J2CPP_CLASS_NAME,
	android::view::HapticFeedbackConstants::J2CPP_FIELD_NAME(2),
	android::view::HapticFeedbackConstants::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::view::HapticFeedbackConstants::FLAG_IGNORE_GLOBAL_SETTING;


J2CPP_DEFINE_CLASS(android::view::HapticFeedbackConstants,"android/view/HapticFeedbackConstants")
J2CPP_DEFINE_METHOD(android::view::HapticFeedbackConstants,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::view::HapticFeedbackConstants,0,"LONG_PRESS","I")
J2CPP_DEFINE_FIELD(android::view::HapticFeedbackConstants,1,"FLAG_IGNORE_VIEW_SETTING","I")
J2CPP_DEFINE_FIELD(android::view::HapticFeedbackConstants,2,"FLAG_IGNORE_GLOBAL_SETTING","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
