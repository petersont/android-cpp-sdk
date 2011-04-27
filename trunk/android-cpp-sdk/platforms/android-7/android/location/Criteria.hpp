/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.location.Criteria
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_CRITERIA_HPP_DECL
#define J2CPP_ANDROID_LOCATION_CRITERIA_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace location {

	class Criteria;
	class Criteria
		: public object<Criteria>
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
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit Criteria(jobject jobj)
		: object<Criteria>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		Criteria();
		Criteria(local_ref< android::location::Criteria > const&);
		void setAccuracy(jint);
		jint getAccuracy();
		void setPowerRequirement(jint);
		jint getPowerRequirement();
		void setCostAllowed(jboolean);
		jboolean isCostAllowed();
		void setAltitudeRequired(jboolean);
		jboolean isAltitudeRequired();
		void setSpeedRequired(jboolean);
		jboolean isSpeedRequired();
		void setBearingRequired(jboolean);
		jboolean isBearingRequired();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > NO_REQUIREMENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > POWER_LOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > POWER_MEDIUM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > POWER_HIGH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > ACCURACY_FINE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > ACCURACY_COARSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Criteria

} //namespace location
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_CRITERIA_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_CRITERIA_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_CRITERIA_HPP_IMPL

namespace j2cpp {



android::location::Criteria::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::location::Criteria::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::location::Criteria::Criteria()
: object<android::location::Criteria>(
	call_new_object<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(0),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::location::Criteria::Criteria(local_ref< android::location::Criteria > const &a0)
: object<android::location::Criteria>(
	call_new_object<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(1),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void android::location::Criteria::setAccuracy(jint a0)
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(2),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jint android::location::Criteria::getAccuracy()
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(3),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void android::location::Criteria::setPowerRequirement(jint a0)
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(4),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jint android::location::Criteria::getPowerRequirement()
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(5),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

void android::location::Criteria::setCostAllowed(jboolean a0)
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(6),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jboolean android::location::Criteria::isCostAllowed()
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(7),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

void android::location::Criteria::setAltitudeRequired(jboolean a0)
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(8),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

jboolean android::location::Criteria::isAltitudeRequired()
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(9),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

void android::location::Criteria::setSpeedRequired(jboolean a0)
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(10),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

jboolean android::location::Criteria::isSpeedRequired()
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(11),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

void android::location::Criteria::setBearingRequired(jboolean a0)
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(12),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

jboolean android::location::Criteria::isBearingRequired()
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(13),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

jint android::location::Criteria::describeContents()
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(14),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject());
}

void android::location::Criteria::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::location::Criteria::J2CPP_CLASS_NAME,
		android::location::Criteria::J2CPP_METHOD_NAME(15),
		android::location::Criteria::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1);
}



static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(0),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::location::Criteria::NO_REQUIREMENT;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(1),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::location::Criteria::POWER_LOW;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(2),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::location::Criteria::POWER_MEDIUM;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(3),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::location::Criteria::POWER_HIGH;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(4),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::location::Criteria::ACCURACY_FINE;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(5),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::location::Criteria::ACCURACY_COARSE;

static_field<
	android::location::Criteria::J2CPP_CLASS_NAME,
	android::location::Criteria::J2CPP_FIELD_NAME(6),
	android::location::Criteria::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::os::Parcelable_::Creator >
> android::location::Criteria::CREATOR;


J2CPP_DEFINE_CLASS(android::location::Criteria,"android/location/Criteria")
J2CPP_DEFINE_METHOD(android::location::Criteria,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::location::Criteria,1,"<init>","(Landroid/location/Criteria;)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,2,"setAccuracy","(I)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,3,"getAccuracy","()I")
J2CPP_DEFINE_METHOD(android::location::Criteria,4,"setPowerRequirement","(I)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,5,"getPowerRequirement","()I")
J2CPP_DEFINE_METHOD(android::location::Criteria,6,"setCostAllowed","(Z)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,7,"isCostAllowed","()Z")
J2CPP_DEFINE_METHOD(android::location::Criteria,8,"setAltitudeRequired","(Z)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,9,"isAltitudeRequired","()Z")
J2CPP_DEFINE_METHOD(android::location::Criteria,10,"setSpeedRequired","(Z)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,11,"isSpeedRequired","()Z")
J2CPP_DEFINE_METHOD(android::location::Criteria,12,"setBearingRequired","(Z)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,13,"isBearingRequired","()Z")
J2CPP_DEFINE_METHOD(android::location::Criteria,14,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::location::Criteria,15,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::location::Criteria,16,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::location::Criteria,0,"NO_REQUIREMENT","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,1,"POWER_LOW","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,2,"POWER_MEDIUM","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,3,"POWER_HIGH","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,4,"ACCURACY_FINE","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,5,"ACCURACY_COARSE","I")
J2CPP_DEFINE_FIELD(android::location::Criteria,6,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_CRITERIA_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION