/*================================================================================
  code generated by: java2cpp
  class: android.view.InputEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTEVENT_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTEVENT_HPP_DECL


namespace j2cpp { namespace android { namespace view { class InputDevice; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcelable.hpp>
#include <android/view/InputDevice.hpp>


namespace j2cpp {

namespace android { namespace view {

	class InputEvent;
	class InputEvent
		: public cpp_object<InputEvent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)

		InputEvent(jobject jobj)
		: cpp_object<InputEvent>(jobj)
		{
		}

		cpp_int getDeviceId();
		local_ref< android::view::InputDevice > getDevice();
		cpp_int getSource();
		cpp_int describeContents();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class InputEvent

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTEVENT_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTEVENT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::view::InputEvent > create< android::view::InputEvent>()
{
	return local_ref< android::view::InputEvent >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::InputEvent::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::InputEvent::J2CPP_CLASS_NAME, android::view::InputEvent::J2CPP_METHOD_NAME(0), android::view::InputEvent::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int android::view::InputEvent::getDeviceId()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< android::view::InputDevice > android::view::InputEvent::getDevice()
{
	return local_ref< android::view::InputDevice >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::view::InputEvent::getSource()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::view::InputEvent::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


static_field<
	android::view::InputEvent::J2CPP_CLASS_NAME,
	android::view::InputEvent::J2CPP_FIELD_NAME(0),
	android::view::InputEvent::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::view::InputEvent::CREATOR;


J2CPP_DEFINE_CLASS(android::view::InputEvent,"android/view/InputEvent")
J2CPP_DEFINE_METHOD(android::view::InputEvent,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::InputEvent,1,"getDeviceId","()I")
J2CPP_DEFINE_METHOD(android::view::InputEvent,2,"getDevice","()Landroid/view/InputDevice;")
J2CPP_DEFINE_METHOD(android::view::InputEvent,3,"getSource","()I")
J2CPP_DEFINE_METHOD(android::view::InputEvent,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::InputEvent,5,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::InputEvent,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION