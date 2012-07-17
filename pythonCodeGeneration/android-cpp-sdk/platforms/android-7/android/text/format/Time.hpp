/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.format.Time
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_FORMAT_TIME_HPP_DECL
#define J2CPP_ANDROID_TEXT_FORMAT_TIME_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace format {

	class Time;
	class Time
		: public object<Time>
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
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)

		explicit Time(jobject jobj)
		: object<Time>(jobj)
		, allDay(jobj)
		, second(jobj)
		, minute(jobj)
		, hour(jobj)
		, monthDay(jobj)
		, month(jobj)
		, year(jobj)
		, weekDay(jobj)
		, yearDay(jobj)
		, isDst(jobj)
		, gmtoff(jobj)
		, timezone(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Time(local_ref< java::lang::String > const&);
		Time();
		Time(local_ref< android::text::format::Time > const&);
		jlong normalize(jboolean);
		void switchTimezone(local_ref< java::lang::String >  const&);
		jint getActualMaximum(jint);
		void clear(local_ref< java::lang::String >  const&);
		static jint compare(local_ref< android::text::format::Time >  const&, local_ref< android::text::format::Time >  const&);
		local_ref< java::lang::String > format(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toString();
		jboolean parse(local_ref< java::lang::String >  const&);
		jboolean parse3339(local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > getCurrentTimezone();
		void setToNow();
		jlong toMillis(jboolean);
		void set(jlong);
		local_ref< java::lang::String > format2445();
		void set(local_ref< android::text::format::Time >  const&);
		void set(jint, jint, jint, jint, jint, jint);
		void set(jint, jint, jint);
		jboolean before(local_ref< android::text::format::Time >  const&);
		jboolean after(local_ref< android::text::format::Time >  const&);
		jint getWeekNumber();
		local_ref< java::lang::String > format3339(jboolean);
		static jboolean isEpoch(local_ref< android::text::format::Time >  const&);
		static jint getJulianDay(jlong, jlong);
		jlong setJulianDay(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > TIMEZONE_UTC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > EPOCH_JULIAN_DAY;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jboolean > allDay;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > second;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > minute;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > hour;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > monthDay;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > month;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > year;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > weekDay;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > yearDay;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > isDst;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jlong > gmtoff;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > timezone;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > SECOND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > MINUTE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > MONTH_DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > WEEK_DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > YEAR_DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > WEEK_NUM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > SUNDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > MONDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > TUESDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > WEDNESDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > THURSDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jint > FRIDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), jint > SATURDAY;
	}; //class Time

} //namespace format
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_FORMAT_TIME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_FORMAT_TIME_HPP_IMPL
#define J2CPP_ANDROID_TEXT_FORMAT_TIME_HPP_IMPL

namespace j2cpp {



android::text::format::Time::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::format::Time::Time(local_ref< java::lang::String > const &a0)
: object<android::text::format::Time>(
	call_new_object<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(0),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
, allDay(get_jobject())
, second(get_jobject())
, minute(get_jobject())
, hour(get_jobject())
, monthDay(get_jobject())
, month(get_jobject())
, year(get_jobject())
, weekDay(get_jobject())
, yearDay(get_jobject())
, isDst(get_jobject())
, gmtoff(get_jobject())
, timezone(get_jobject())
{
}



android::text::format::Time::Time()
: object<android::text::format::Time>(
	call_new_object<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(1),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(1)
	>()
)
, allDay(get_jobject())
, second(get_jobject())
, minute(get_jobject())
, hour(get_jobject())
, monthDay(get_jobject())
, month(get_jobject())
, year(get_jobject())
, weekDay(get_jobject())
, yearDay(get_jobject())
, isDst(get_jobject())
, gmtoff(get_jobject())
, timezone(get_jobject())
{
}



android::text::format::Time::Time(local_ref< android::text::format::Time > const &a0)
: object<android::text::format::Time>(
	call_new_object<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(2),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
, allDay(get_jobject())
, second(get_jobject())
, minute(get_jobject())
, hour(get_jobject())
, monthDay(get_jobject())
, month(get_jobject())
, year(get_jobject())
, weekDay(get_jobject())
, yearDay(get_jobject())
, isDst(get_jobject())
, gmtoff(get_jobject())
, timezone(get_jobject())
{
}


jlong android::text::format::Time::normalize(jboolean a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(3),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject(), a0);
}

void android::text::format::Time::switchTimezone(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(4),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jint android::text::format::Time::getActualMaximum(jint a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(5),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

void android::text::format::Time::clear(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(6),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jint android::text::format::Time::compare(local_ref< android::text::format::Time > const &a0, local_ref< android::text::format::Time > const &a1)
{
	return call_static_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(7),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(a0, a1);
}

local_ref< java::lang::String > android::text::format::Time::format(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(8),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::text::format::Time::toString()
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(9),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean android::text::format::Time::parse(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(10),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::text::format::Time::parse3339(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(11),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::text::format::Time::getCurrentTimezone()
{
	return call_static_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(12),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>();
}

void android::text::format::Time::setToNow()
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(13),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject());
}

jlong android::text::format::Time::toMillis(jboolean a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(14),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(14), 
		jlong
	>(get_jobject(), a0);
}

void android::text::format::Time::set(jlong a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(15),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::text::format::Time::format2445()
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(16),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void android::text::format::Time::set(local_ref< android::text::format::Time > const &a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(17),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

void android::text::format::Time::set(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(18),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::text::format::Time::set(jint a0, jint a1, jint a2)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(19),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1, a2);
}

jboolean android::text::format::Time::before(local_ref< android::text::format::Time > const &a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(20),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::text::format::Time::after(local_ref< android::text::format::Time > const &a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(21),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject(), a0);
}

jint android::text::format::Time::getWeekNumber()
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(22),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::text::format::Time::format3339(jboolean a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(23),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jboolean android::text::format::Time::isEpoch(local_ref< android::text::format::Time > const &a0)
{
	return call_static_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(24),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(a0);
}

jint android::text::format::Time::getJulianDay(jlong a0, jlong a1)
{
	return call_static_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(25),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(a0, a1);
}

jlong android::text::format::Time::setJulianDay(jint a0)
{
	return call_method<
		android::text::format::Time::J2CPP_CLASS_NAME,
		android::text::format::Time::J2CPP_METHOD_NAME(26),
		android::text::format::Time::J2CPP_METHOD_SIGNATURE(26), 
		jlong
	>(get_jobject(), a0);
}


static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(0),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::text::format::Time::TIMEZONE_UTC;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(1),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::text::format::Time::EPOCH_JULIAN_DAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(14),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::text::format::Time::SECOND;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(15),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::text::format::Time::MINUTE;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(16),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::text::format::Time::HOUR;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(17),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::text::format::Time::MONTH_DAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(18),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::text::format::Time::MONTH;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(19),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::text::format::Time::YEAR;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(20),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::text::format::Time::WEEK_DAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(21),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::text::format::Time::YEAR_DAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(22),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(22),
	jint
> android::text::format::Time::WEEK_NUM;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(23),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(23),
	jint
> android::text::format::Time::SUNDAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(24),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(24),
	jint
> android::text::format::Time::MONDAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(25),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(25),
	jint
> android::text::format::Time::TUESDAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(26),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(26),
	jint
> android::text::format::Time::WEDNESDAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(27),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(27),
	jint
> android::text::format::Time::THURSDAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(28),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(28),
	jint
> android::text::format::Time::FRIDAY;

static_field<
	android::text::format::Time::J2CPP_CLASS_NAME,
	android::text::format::Time::J2CPP_FIELD_NAME(29),
	android::text::format::Time::J2CPP_FIELD_SIGNATURE(29),
	jint
> android::text::format::Time::SATURDAY;


J2CPP_DEFINE_CLASS(android::text::format::Time,"android/text/format/Time")
J2CPP_DEFINE_METHOD(android::text::format::Time,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::format::Time,1,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::format::Time,2,"<init>","(Landroid/text/format/Time;)V")
J2CPP_DEFINE_METHOD(android::text::format::Time,3,"normalize","(Z)J")
J2CPP_DEFINE_METHOD(android::text::format::Time,4,"switchTimezone","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::format::Time,5,"getActualMaximum","(I)I")
J2CPP_DEFINE_METHOD(android::text::format::Time,6,"clear","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::format::Time,7,"compare","(Landroid/text/format/Time;Landroid/text/format/Time;)I")
J2CPP_DEFINE_METHOD(android::text::format::Time,8,"format","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::Time,9,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::Time,10,"parse","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::text::format::Time,11,"parse3339","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::text::format::Time,12,"getCurrentTimezone","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::Time,13,"setToNow","()V")
J2CPP_DEFINE_METHOD(android::text::format::Time,14,"toMillis","(Z)J")
J2CPP_DEFINE_METHOD(android::text::format::Time,15,"set","(J)V")
J2CPP_DEFINE_METHOD(android::text::format::Time,16,"format2445","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::Time,17,"set","(Landroid/text/format/Time;)V")
J2CPP_DEFINE_METHOD(android::text::format::Time,18,"set","(IIIIII)V")
J2CPP_DEFINE_METHOD(android::text::format::Time,19,"set","(III)V")
J2CPP_DEFINE_METHOD(android::text::format::Time,20,"before","(Landroid/text/format/Time;)Z")
J2CPP_DEFINE_METHOD(android::text::format::Time,21,"after","(Landroid/text/format/Time;)Z")
J2CPP_DEFINE_METHOD(android::text::format::Time,22,"getWeekNumber","()I")
J2CPP_DEFINE_METHOD(android::text::format::Time,23,"format3339","(Z)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::Time,24,"isEpoch","(Landroid/text/format/Time;)Z")
J2CPP_DEFINE_METHOD(android::text::format::Time,25,"getJulianDay","(JJ)I")
J2CPP_DEFINE_METHOD(android::text::format::Time,26,"setJulianDay","(I)J")
J2CPP_DEFINE_FIELD(android::text::format::Time,0,"TIMEZONE_UTC","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::Time,1,"EPOCH_JULIAN_DAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,2,"allDay","Z")
J2CPP_DEFINE_FIELD(android::text::format::Time,3,"second","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,4,"minute","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,5,"hour","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,6,"monthDay","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,7,"month","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,8,"year","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,9,"weekDay","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,10,"yearDay","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,11,"isDst","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,12,"gmtoff","J")
J2CPP_DEFINE_FIELD(android::text::format::Time,13,"timezone","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::Time,14,"SECOND","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,15,"MINUTE","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,16,"HOUR","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,17,"MONTH_DAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,18,"MONTH","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,19,"YEAR","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,20,"WEEK_DAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,21,"YEAR_DAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,22,"WEEK_NUM","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,23,"SUNDAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,24,"MONDAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,25,"TUESDAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,26,"WEDNESDAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,27,"THURSDAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,28,"FRIDAY","I")
J2CPP_DEFINE_FIELD(android::text::format::Time,29,"SATURDAY","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_FORMAT_TIME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
