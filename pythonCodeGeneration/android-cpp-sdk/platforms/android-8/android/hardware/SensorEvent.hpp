/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.hardware.SensorEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_SENSOREVENT_HPP_DECL
#define J2CPP_ANDROID_HARDWARE_SENSOREVENT_HPP_DECL


namespace j2cpp { namespace android { namespace hardware { class Sensor; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/hardware/Sensor.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace hardware {

	class SensorEvent;
	class SensorEvent
		: public object<SensorEvent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit SensorEvent(jobject jobj)
		: object<SensorEvent>(jobj)
		, values(jobj)
		, sensor(jobj)
		, accuracy(jobj)
		, timestamp(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;



		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< array<jfloat,1> > > values;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::hardware::Sensor > > sensor;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > accuracy;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jlong > timestamp;
	}; //class SensorEvent

} //namespace hardware
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_SENSOREVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_SENSOREVENT_HPP_IMPL
#define J2CPP_ANDROID_HARDWARE_SENSOREVENT_HPP_IMPL

namespace j2cpp {



android::hardware::SensorEvent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




J2CPP_DEFINE_CLASS(android::hardware::SensorEvent,"android/hardware/SensorEvent")
J2CPP_DEFINE_METHOD(android::hardware::SensorEvent,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::hardware::SensorEvent,0,"values","[F")
J2CPP_DEFINE_FIELD(android::hardware::SensorEvent,1,"sensor","Landroid/hardware/Sensor;")
J2CPP_DEFINE_FIELD(android::hardware::SensorEvent,2,"accuracy","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorEvent,3,"timestamp","J")

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_SENSOREVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
