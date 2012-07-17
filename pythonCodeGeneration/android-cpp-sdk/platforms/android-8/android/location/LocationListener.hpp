/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.location.LocationListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_DECL
#define J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace location { class Location; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/location/Location.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace location {

	class LocationListener;
	class LocationListener
		: public object<LocationListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit LocationListener(jobject jobj)
		: object<LocationListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void onLocationChanged(local_ref< android::location::Location >  const&);
		void onStatusChanged(local_ref< java::lang::String >  const&, jint, local_ref< android::os::Bundle >  const&);
		void onProviderEnabled(local_ref< java::lang::String >  const&);
		void onProviderDisabled(local_ref< java::lang::String >  const&);
	}; //class LocationListener

} //namespace location
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_IMPL

namespace j2cpp {



android::location::LocationListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::location::LocationListener::onLocationChanged(local_ref< android::location::Location > const &a0)
{
	return call_method<
		android::location::LocationListener::J2CPP_CLASS_NAME,
		android::location::LocationListener::J2CPP_METHOD_NAME(0),
		android::location::LocationListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void android::location::LocationListener::onStatusChanged(local_ref< java::lang::String > const &a0, jint a1, local_ref< android::os::Bundle > const &a2)
{
	return call_method<
		android::location::LocationListener::J2CPP_CLASS_NAME,
		android::location::LocationListener::J2CPP_METHOD_NAME(1),
		android::location::LocationListener::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::location::LocationListener::onProviderEnabled(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::location::LocationListener::J2CPP_CLASS_NAME,
		android::location::LocationListener::J2CPP_METHOD_NAME(2),
		android::location::LocationListener::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::location::LocationListener::onProviderDisabled(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::location::LocationListener::J2CPP_CLASS_NAME,
		android::location::LocationListener::J2CPP_METHOD_NAME(3),
		android::location::LocationListener::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::location::LocationListener,"android/location/LocationListener")
J2CPP_DEFINE_METHOD(android::location::LocationListener,0,"onLocationChanged","(Landroid/location/Location;)V")
J2CPP_DEFINE_METHOD(android::location::LocationListener,1,"onStatusChanged","(Ljava/lang/String;ILandroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::location::LocationListener,2,"onProviderEnabled","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::LocationListener,3,"onProviderDisabled","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
