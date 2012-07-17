/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.TouchUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_TOUCHUTILS_HPP_DECL
#define J2CPP_ANDROID_TEST_TOUCHUTILS_HPP_DECL


namespace j2cpp { namespace android { namespace test { class ActivityInstrumentationTestCase; } } }
namespace j2cpp { namespace android { namespace test { class InstrumentationTestCase; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }


#include <android/app/Activity.hpp>
#include <android/test/ActivityInstrumentationTestCase.hpp>
#include <android/test/InstrumentationTestCase.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace test {

	class TouchUtils;
	class TouchUtils
		: public object<TouchUtils>
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
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)

		explicit TouchUtils(jobject jobj)
		: object<TouchUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TouchUtils();
		static void dragQuarterScreenDown(local_ref< android::test::ActivityInstrumentationTestCase >  const&);
		static void dragQuarterScreenDown(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::app::Activity >  const&);
		static void dragQuarterScreenUp(local_ref< android::test::ActivityInstrumentationTestCase >  const&);
		static void dragQuarterScreenUp(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::app::Activity >  const&);
		static void scrollToBottom(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::ViewGroup >  const&);
		static void scrollToBottom(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::app::Activity >  const&, local_ref< android::view::ViewGroup >  const&);
		static void scrollToTop(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::ViewGroup >  const&);
		static void scrollToTop(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::app::Activity >  const&, local_ref< android::view::ViewGroup >  const&);
		static void dragViewToBottom(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&);
		static void dragViewToBottom(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::app::Activity >  const&, local_ref< android::view::View >  const&);
		static void dragViewToBottom(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint);
		static void dragViewToBottom(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::app::Activity >  const&, local_ref< android::view::View >  const&, jint);
		static void tapView(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&);
		static void touchAndCancelView(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&);
		static void clickView(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&);
		static void longClickView(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&);
		static void longClickView(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&);
		static void dragViewToTop(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&);
		static void dragViewToTop(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint);
		static void dragViewToTop(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&);
		static void dragViewToTop(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint);
		static jint dragViewBy(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint, jint, jint);
		static jint dragViewBy(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint, jint, jint);
		static jint dragViewTo(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint, jint, jint);
		static jint dragViewTo(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint, jint, jint);
		static jint dragViewToX(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint, jint);
		static jint dragViewToX(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint, jint);
		static jint dragViewToY(local_ref< android::test::ActivityInstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint, jint);
		static jint dragViewToY(local_ref< android::test::InstrumentationTestCase >  const&, local_ref< android::view::View >  const&, jint, jint);
		static void drag(local_ref< android::test::ActivityInstrumentationTestCase >  const&, jfloat, jfloat, jfloat, jfloat, jint);
		static void drag(local_ref< android::test::InstrumentationTestCase >  const&, jfloat, jfloat, jfloat, jfloat, jint);
	}; //class TouchUtils

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_TOUCHUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_TOUCHUTILS_HPP_IMPL
#define J2CPP_ANDROID_TEST_TOUCHUTILS_HPP_IMPL

namespace j2cpp {



android::test::TouchUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::test::TouchUtils::TouchUtils()
: object<android::test::TouchUtils>(
	call_new_object<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(0),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::test::TouchUtils::dragQuarterScreenDown(local_ref< android::test::ActivityInstrumentationTestCase > const &a0)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(1),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0);
}

void android::test::TouchUtils::dragQuarterScreenDown(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::app::Activity > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(2),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::dragQuarterScreenUp(local_ref< android::test::ActivityInstrumentationTestCase > const &a0)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(3),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(a0);
}

void android::test::TouchUtils::dragQuarterScreenUp(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::app::Activity > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(4),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::scrollToBottom(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::ViewGroup > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(5),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::scrollToBottom(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::app::Activity > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(6),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(a0, a1, a2);
}

void android::test::TouchUtils::scrollToTop(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::ViewGroup > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(7),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::scrollToTop(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::app::Activity > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(8),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(a0, a1, a2);
}

void android::test::TouchUtils::dragViewToBottom(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(9),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::dragViewToBottom(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::app::Activity > const &a1, local_ref< android::view::View > const &a2)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(10),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(a0, a1, a2);
}

void android::test::TouchUtils::dragViewToBottom(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(11),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(a0, a1, a2);
}

void android::test::TouchUtils::dragViewToBottom(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::app::Activity > const &a1, local_ref< android::view::View > const &a2, jint a3)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(12),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(a0, a1, a2, a3);
}

void android::test::TouchUtils::tapView(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(13),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::touchAndCancelView(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(14),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::clickView(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(15),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::longClickView(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(16),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::longClickView(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(17),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::dragViewToTop(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(18),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::dragViewToTop(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(19),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(a0, a1, a2);
}

void android::test::TouchUtils::dragViewToTop(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(20),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(a0, a1);
}

void android::test::TouchUtils::dragViewToTop(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(21),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(a0, a1, a2);
}

jint android::test::TouchUtils::dragViewBy(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2, jint a3, jint a4)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(22),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(a0, a1, a2, a3, a4);
}

jint android::test::TouchUtils::dragViewBy(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2, jint a3, jint a4)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(23),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(23), 
		jint
	>(a0, a1, a2, a3, a4);
}

jint android::test::TouchUtils::dragViewTo(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2, jint a3, jint a4)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(24),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(24), 
		jint
	>(a0, a1, a2, a3, a4);
}

jint android::test::TouchUtils::dragViewTo(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2, jint a3, jint a4)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(25),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(a0, a1, a2, a3, a4);
}

jint android::test::TouchUtils::dragViewToX(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2, jint a3)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(26),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(a0, a1, a2, a3);
}

jint android::test::TouchUtils::dragViewToX(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2, jint a3)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(27),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(27), 
		jint
	>(a0, a1, a2, a3);
}

jint android::test::TouchUtils::dragViewToY(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2, jint a3)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(28),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(28), 
		jint
	>(a0, a1, a2, a3);
}

jint android::test::TouchUtils::dragViewToY(local_ref< android::test::InstrumentationTestCase > const &a0, local_ref< android::view::View > const &a1, jint a2, jint a3)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(29),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(29), 
		jint
	>(a0, a1, a2, a3);
}

void android::test::TouchUtils::drag(local_ref< android::test::ActivityInstrumentationTestCase > const &a0, jfloat a1, jfloat a2, jfloat a3, jfloat a4, jint a5)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(30),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(30), 
		void
	>(a0, a1, a2, a3, a4, a5);
}

void android::test::TouchUtils::drag(local_ref< android::test::InstrumentationTestCase > const &a0, jfloat a1, jfloat a2, jfloat a3, jfloat a4, jint a5)
{
	return call_static_method<
		android::test::TouchUtils::J2CPP_CLASS_NAME,
		android::test::TouchUtils::J2CPP_METHOD_NAME(31),
		android::test::TouchUtils::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(a0, a1, a2, a3, a4, a5);
}


J2CPP_DEFINE_CLASS(android::test::TouchUtils,"android/test/TouchUtils")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,1,"dragQuarterScreenDown","(Landroid/test/ActivityInstrumentationTestCase;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,2,"dragQuarterScreenDown","(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,3,"dragQuarterScreenUp","(Landroid/test/ActivityInstrumentationTestCase;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,4,"dragQuarterScreenUp","(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,5,"scrollToBottom","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/ViewGroup;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,6,"scrollToBottom","(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;Landroid/view/ViewGroup;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,7,"scrollToTop","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/ViewGroup;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,8,"scrollToTop","(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;Landroid/view/ViewGroup;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,9,"dragViewToBottom","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,10,"dragViewToBottom","(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,11,"dragViewToBottom","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;I)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,12,"dragViewToBottom","(Landroid/test/InstrumentationTestCase;Landroid/app/Activity;Landroid/view/View;I)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,13,"tapView","(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,14,"touchAndCancelView","(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,15,"clickView","(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,16,"longClickView","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,17,"longClickView","(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,18,"dragViewToTop","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,19,"dragViewToTop","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;I)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,20,"dragViewToTop","(Landroid/test/InstrumentationTestCase;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,21,"dragViewToTop","(Landroid/test/InstrumentationTestCase;Landroid/view/View;I)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,22,"dragViewBy","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;III)I")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,23,"dragViewBy","(Landroid/test/InstrumentationTestCase;Landroid/view/View;III)I")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,24,"dragViewTo","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;III)I")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,25,"dragViewTo","(Landroid/test/InstrumentationTestCase;Landroid/view/View;III)I")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,26,"dragViewToX","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;II)I")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,27,"dragViewToX","(Landroid/test/InstrumentationTestCase;Landroid/view/View;II)I")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,28,"dragViewToY","(Landroid/test/ActivityInstrumentationTestCase;Landroid/view/View;II)I")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,29,"dragViewToY","(Landroid/test/InstrumentationTestCase;Landroid/view/View;II)I")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,30,"drag","(Landroid/test/ActivityInstrumentationTestCase;FFFFI)V")
J2CPP_DEFINE_METHOD(android::test::TouchUtils,31,"drag","(Landroid/test/InstrumentationTestCase;FFFFI)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_TOUCHUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
