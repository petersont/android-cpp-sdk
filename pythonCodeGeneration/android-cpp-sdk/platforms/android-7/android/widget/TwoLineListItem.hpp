/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.TwoLineListItem
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_DECL
#define J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { class RelativeLayout; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/RelativeLayout.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class TwoLineListItem;
	class TwoLineListItem
		: public object<TwoLineListItem>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit TwoLineListItem(jobject jobj)
		: object<TwoLineListItem>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::widget::RelativeLayout>() const;


		TwoLineListItem(local_ref< android::content::Context > const&);
		TwoLineListItem(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		TwoLineListItem(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		local_ref< android::widget::TextView > getText1();
		local_ref< android::widget::TextView > getText2();
	}; //class TwoLineListItem

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_IMPL

namespace j2cpp {



android::widget::TwoLineListItem::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::TwoLineListItem::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::TwoLineListItem::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::TwoLineListItem::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::TwoLineListItem::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::TwoLineListItem::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::TwoLineListItem::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::TwoLineListItem::operator local_ref<android::widget::RelativeLayout>() const
{
	return local_ref<android::widget::RelativeLayout>(get_jobject());
}


android::widget::TwoLineListItem::TwoLineListItem(local_ref< android::content::Context > const &a0)
: object<android::widget::TwoLineListItem>(
	call_new_object<
		android::widget::TwoLineListItem::J2CPP_CLASS_NAME,
		android::widget::TwoLineListItem::J2CPP_METHOD_NAME(0),
		android::widget::TwoLineListItem::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::TwoLineListItem::TwoLineListItem(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::TwoLineListItem>(
	call_new_object<
		android::widget::TwoLineListItem::J2CPP_CLASS_NAME,
		android::widget::TwoLineListItem::J2CPP_METHOD_NAME(1),
		android::widget::TwoLineListItem::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::TwoLineListItem::TwoLineListItem(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::TwoLineListItem>(
	call_new_object<
		android::widget::TwoLineListItem::J2CPP_CLASS_NAME,
		android::widget::TwoLineListItem::J2CPP_METHOD_NAME(2),
		android::widget::TwoLineListItem::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}



local_ref< android::widget::TextView > android::widget::TwoLineListItem::getText1()
{
	return call_method<
		android::widget::TwoLineListItem::J2CPP_CLASS_NAME,
		android::widget::TwoLineListItem::J2CPP_METHOD_NAME(4),
		android::widget::TwoLineListItem::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::widget::TextView >
	>(get_jobject());
}

local_ref< android::widget::TextView > android::widget::TwoLineListItem::getText2()
{
	return call_method<
		android::widget::TwoLineListItem::J2CPP_CLASS_NAME,
		android::widget::TwoLineListItem::J2CPP_METHOD_NAME(5),
		android::widget::TwoLineListItem::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::widget::TextView >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::TwoLineListItem,"android/widget/TwoLineListItem")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,3,"onFinishInflate","()V")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,4,"getText1","()Landroid/widget/TextView;")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,5,"getText2","()Landroid/widget/TextView;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
