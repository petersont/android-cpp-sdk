/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.bluetooth.BluetoothDevice
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_HPP_DECL
#define J2CPP_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class UUID; } } }
namespace j2cpp { namespace android { namespace bluetooth { class BluetoothClass; } } }
namespace j2cpp { namespace android { namespace bluetooth { class BluetoothSocket; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/bluetooth/BluetoothClass.hpp>
#include <android/bluetooth/BluetoothSocket.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/UUID.hpp>


namespace j2cpp {

namespace android { namespace bluetooth {

	class BluetoothDevice;
	class BluetoothDevice
		: public object<BluetoothDevice>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)

		explicit BluetoothDevice(jobject jobj)
		: object<BluetoothDevice>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< java::lang::String > getAddress();
		local_ref< java::lang::String > getName();
		jint getBondState();
		local_ref< android::bluetooth::BluetoothClass > getBluetoothClass();
		local_ref< android::bluetooth::BluetoothSocket > createRfcommSocketToServiceRecord(local_ref< java::util::UUID >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > ACTION_FOUND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > ACTION_CLASS_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > ACTION_ACL_CONNECTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > ACTION_ACL_DISCONNECT_REQUESTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > ACTION_ACL_DISCONNECTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > ACTION_NAME_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > ACTION_BOND_STATE_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > EXTRA_DEVICE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > EXTRA_NAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > EXTRA_RSSI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > EXTRA_CLASS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > EXTRA_BOND_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > EXTRA_PREVIOUS_BOND_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > BOND_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > BOND_BONDING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > BOND_BONDED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class BluetoothDevice

} //namespace bluetooth
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_HPP_IMPL
#define J2CPP_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_HPP_IMPL

namespace j2cpp {



android::bluetooth::BluetoothDevice::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::bluetooth::BluetoothDevice::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


jboolean android::bluetooth::BluetoothDevice::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(1),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}

jint android::bluetooth::BluetoothDevice::hashCode()
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(2),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > android::bluetooth::BluetoothDevice::toString()
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(3),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::bluetooth::BluetoothDevice::describeContents()
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(4),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::bluetooth::BluetoothDevice::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(5),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::bluetooth::BluetoothDevice::getAddress()
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(6),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::bluetooth::BluetoothDevice::getName()
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(7),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::bluetooth::BluetoothDevice::getBondState()
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(8),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

local_ref< android::bluetooth::BluetoothClass > android::bluetooth::BluetoothDevice::getBluetoothClass()
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(9),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::bluetooth::BluetoothClass > >
	(get_jobject());
}

local_ref< android::bluetooth::BluetoothSocket > android::bluetooth::BluetoothDevice::createRfcommSocketToServiceRecord(local_ref< java::util::UUID > const &a0)
{
	return call_method<
		android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_NAME(10),
		android::bluetooth::BluetoothDevice::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::bluetooth::BluetoothSocket > >
	(get_jobject(), a0);
}



static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(0),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::bluetooth::BluetoothDevice::ERROR;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(1),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::ACTION_FOUND;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(2),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::ACTION_CLASS_CHANGED;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(3),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::ACTION_ACL_CONNECTED;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(4),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::ACTION_ACL_DISCONNECT_REQUESTED;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(5),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::ACTION_ACL_DISCONNECTED;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(6),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::ACTION_NAME_CHANGED;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(7),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::ACTION_BOND_STATE_CHANGED;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(8),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::EXTRA_DEVICE;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(9),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::EXTRA_NAME;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(10),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::EXTRA_RSSI;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(11),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::EXTRA_CLASS;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(12),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::EXTRA_BOND_STATE;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(13),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::lang::String >
> android::bluetooth::BluetoothDevice::EXTRA_PREVIOUS_BOND_STATE;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(14),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::bluetooth::BluetoothDevice::BOND_NONE;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(15),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::bluetooth::BluetoothDevice::BOND_BONDING;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(16),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::bluetooth::BluetoothDevice::BOND_BONDED;

static_field<
	android::bluetooth::BluetoothDevice::J2CPP_CLASS_NAME,
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_NAME(17),
	android::bluetooth::BluetoothDevice::J2CPP_FIELD_SIGNATURE(17),
	local_ref< android::os::Parcelable_::Creator >
> android::bluetooth::BluetoothDevice::CREATOR;


J2CPP_DEFINE_CLASS(android::bluetooth::BluetoothDevice,"android/bluetooth/BluetoothDevice")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,6,"getAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,7,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,8,"getBondState","()I")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,9,"getBluetoothClass","()Landroid/bluetooth/BluetoothClass;")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,10,"createRfcommSocketToServiceRecord","(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;")
J2CPP_DEFINE_METHOD(android::bluetooth::BluetoothDevice,11,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,0,"ERROR","I")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,1,"ACTION_FOUND","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,2,"ACTION_CLASS_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,3,"ACTION_ACL_CONNECTED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,4,"ACTION_ACL_DISCONNECT_REQUESTED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,5,"ACTION_ACL_DISCONNECTED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,6,"ACTION_NAME_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,7,"ACTION_BOND_STATE_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,8,"EXTRA_DEVICE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,9,"EXTRA_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,10,"EXTRA_RSSI","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,11,"EXTRA_CLASS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,12,"EXTRA_BOND_STATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,13,"EXTRA_PREVIOUS_BOND_STATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,14,"BOND_NONE","I")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,15,"BOND_BONDING","I")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,16,"BOND_BONDED","I")
J2CPP_DEFINE_FIELD(android::bluetooth::BluetoothDevice,17,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_BLUETOOTH_BLUETOOTHDEVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION