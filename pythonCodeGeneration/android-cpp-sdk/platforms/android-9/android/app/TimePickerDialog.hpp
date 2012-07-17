/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.TimePickerDialog
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_TIMEPICKERDIALOG_HPP_DECL
#define J2CPP_ANDROID_APP_TIMEPICKERDIALOG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnClickListener; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace app { class AlertDialog; } } }
namespace j2cpp { namespace android { namespace app { namespace TimePickerDialog_ { class OnTimeSetListener; } } } }
namespace j2cpp { namespace android { namespace app { class Dialog; } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnCreateContextMenuListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace Window_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace widget { class TimePicker; } } }
namespace j2cpp { namespace android { namespace widget { namespace TimePicker_ { class OnTimeChangedListener; } } } }


#include <android/app/AlertDialog.hpp>
#include <android/app/Dialog.hpp>
#include <android/app/TimePickerDialog.hpp>
#include <android/content/Context.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/os/Bundle.hpp>
#include <android/view/View.hpp>
#include <android/view/Window.hpp>
#include <android/widget/TimePicker.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace app {

	class TimePickerDialog;
	namespace TimePickerDialog_ {

		class OnTimeSetListener;
		class OnTimeSetListener
			: public object<OnTimeSetListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnTimeSetListener(jobject jobj)
			: object<OnTimeSetListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onTimeSet(local_ref< android::widget::TimePicker >  const&, jint, jint);
		}; //class OnTimeSetListener

	} //namespace TimePickerDialog_

	class TimePickerDialog
		: public object<TimePickerDialog>
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

		typedef TimePickerDialog_::OnTimeSetListener OnTimeSetListener;

		explicit TimePickerDialog(jobject jobj)
		: object<TimePickerDialog>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::content::DialogInterface>() const;
		operator local_ref<android::content::DialogInterface_::OnClickListener>() const;
		operator local_ref<android::app::AlertDialog>() const;
		operator local_ref<android::app::Dialog>() const;
		operator local_ref<android::view::View_::OnCreateContextMenuListener>() const;
		operator local_ref<android::view::Window_::Callback>() const;
		operator local_ref<android::widget::TimePicker_::OnTimeChangedListener>() const;


		TimePickerDialog(local_ref< android::content::Context > const&, local_ref< android::app::TimePickerDialog_::OnTimeSetListener > const&, jint, jint, jboolean);
		TimePickerDialog(local_ref< android::content::Context > const&, jint, local_ref< android::app::TimePickerDialog_::OnTimeSetListener > const&, jint, jint, jboolean);
		void onClick(local_ref< android::content::DialogInterface >  const&, jint);
		void onTimeChanged(local_ref< android::widget::TimePicker >  const&, jint, jint);
		void updateTime(jint, jint);
		local_ref< android::os::Bundle > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Bundle >  const&);
	}; //class TimePickerDialog

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_TIMEPICKERDIALOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_TIMEPICKERDIALOG_HPP_IMPL
#define J2CPP_ANDROID_APP_TIMEPICKERDIALOG_HPP_IMPL

namespace j2cpp {




android::app::TimePickerDialog_::OnTimeSetListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::app::TimePickerDialog_::OnTimeSetListener::onTimeSet(local_ref< android::widget::TimePicker > const &a0, jint a1, jint a2)
{
	return call_method<
		android::app::TimePickerDialog_::OnTimeSetListener::J2CPP_CLASS_NAME,
		android::app::TimePickerDialog_::OnTimeSetListener::J2CPP_METHOD_NAME(0),
		android::app::TimePickerDialog_::OnTimeSetListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::app::TimePickerDialog_::OnTimeSetListener,"android/app/TimePickerDialog$OnTimeSetListener")
J2CPP_DEFINE_METHOD(android::app::TimePickerDialog_::OnTimeSetListener,0,"onTimeSet","(Landroid/widget/TimePicker;II)V")



android::app::TimePickerDialog::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::app::TimePickerDialog::operator local_ref<android::content::DialogInterface>() const
{
	return local_ref<android::content::DialogInterface>(get_jobject());
}

android::app::TimePickerDialog::operator local_ref<android::content::DialogInterface_::OnClickListener>() const
{
	return local_ref<android::content::DialogInterface_::OnClickListener>(get_jobject());
}

android::app::TimePickerDialog::operator local_ref<android::app::AlertDialog>() const
{
	return local_ref<android::app::AlertDialog>(get_jobject());
}

android::app::TimePickerDialog::operator local_ref<android::app::Dialog>() const
{
	return local_ref<android::app::Dialog>(get_jobject());
}

android::app::TimePickerDialog::operator local_ref<android::view::View_::OnCreateContextMenuListener>() const
{
	return local_ref<android::view::View_::OnCreateContextMenuListener>(get_jobject());
}

android::app::TimePickerDialog::operator local_ref<android::view::Window_::Callback>() const
{
	return local_ref<android::view::Window_::Callback>(get_jobject());
}

android::app::TimePickerDialog::operator local_ref<android::widget::TimePicker_::OnTimeChangedListener>() const
{
	return local_ref<android::widget::TimePicker_::OnTimeChangedListener>(get_jobject());
}


android::app::TimePickerDialog::TimePickerDialog(local_ref< android::content::Context > const &a0, local_ref< android::app::TimePickerDialog_::OnTimeSetListener > const &a1, jint a2, jint a3, jboolean a4)
: object<android::app::TimePickerDialog>(
	call_new_object<
		android::app::TimePickerDialog::J2CPP_CLASS_NAME,
		android::app::TimePickerDialog::J2CPP_METHOD_NAME(0),
		android::app::TimePickerDialog::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4)
)
{
}



android::app::TimePickerDialog::TimePickerDialog(local_ref< android::content::Context > const &a0, jint a1, local_ref< android::app::TimePickerDialog_::OnTimeSetListener > const &a2, jint a3, jint a4, jboolean a5)
: object<android::app::TimePickerDialog>(
	call_new_object<
		android::app::TimePickerDialog::J2CPP_CLASS_NAME,
		android::app::TimePickerDialog::J2CPP_METHOD_NAME(1),
		android::app::TimePickerDialog::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2, a3, a4, a5)
)
{
}


void android::app::TimePickerDialog::onClick(local_ref< android::content::DialogInterface > const &a0, jint a1)
{
	return call_method<
		android::app::TimePickerDialog::J2CPP_CLASS_NAME,
		android::app::TimePickerDialog::J2CPP_METHOD_NAME(2),
		android::app::TimePickerDialog::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void android::app::TimePickerDialog::onTimeChanged(local_ref< android::widget::TimePicker > const &a0, jint a1, jint a2)
{
	return call_method<
		android::app::TimePickerDialog::J2CPP_CLASS_NAME,
		android::app::TimePickerDialog::J2CPP_METHOD_NAME(3),
		android::app::TimePickerDialog::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::app::TimePickerDialog::updateTime(jint a0, jint a1)
{
	return call_method<
		android::app::TimePickerDialog::J2CPP_CLASS_NAME,
		android::app::TimePickerDialog::J2CPP_METHOD_NAME(4),
		android::app::TimePickerDialog::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< android::os::Bundle > android::app::TimePickerDialog::onSaveInstanceState()
{
	return call_method<
		android::app::TimePickerDialog::J2CPP_CLASS_NAME,
		android::app::TimePickerDialog::J2CPP_METHOD_NAME(5),
		android::app::TimePickerDialog::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::os::Bundle >
	>(get_jobject());
}

void android::app::TimePickerDialog::onRestoreInstanceState(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::app::TimePickerDialog::J2CPP_CLASS_NAME,
		android::app::TimePickerDialog::J2CPP_METHOD_NAME(6),
		android::app::TimePickerDialog::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::app::TimePickerDialog,"android/app/TimePickerDialog")
J2CPP_DEFINE_METHOD(android::app::TimePickerDialog,0,"<init>","(Landroid/content/Context;Landroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V")
J2CPP_DEFINE_METHOD(android::app::TimePickerDialog,1,"<init>","(Landroid/content/Context;ILandroid/app/TimePickerDialog$OnTimeSetListener;IIZ)V")
J2CPP_DEFINE_METHOD(android::app::TimePickerDialog,2,"onClick","(Landroid/content/DialogInterface;I)V")
J2CPP_DEFINE_METHOD(android::app::TimePickerDialog,3,"onTimeChanged","(Landroid/widget/TimePicker;II)V")
J2CPP_DEFINE_METHOD(android::app::TimePickerDialog,4,"updateTime","(II)V")
J2CPP_DEFINE_METHOD(android::app::TimePickerDialog,5,"onSaveInstanceState","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::app::TimePickerDialog,6,"onRestoreInstanceState","(Landroid/os/Bundle;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_TIMEPICKERDIALOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
