#ifndef MEETUP_H_
#define MEETUP_H_

#include <boost/date_time/gregorian/gregorian.hpp>

using namespace boost::gregorian;

namespace meetup
{
    class scheduler
    {
    protected:
        int    refMonth;
        int    refYear;

        date teenth_generic     (boost::date_time::weekdays day)            const;
        date nth_generic        (int n, boost::date_time::weekdays day)     const;
        date last_generic       (boost::date_time::weekdays day)            const;

    public:
        scheduler(int month, int year);
        // TEENTH
        date monteenth()    const;
        date tuesteenth()   const;
        date wednesteenth() const;
        date thursteenth()  const;
        date friteenth()    const;
        date saturteenth()  const;
        date sunteenth()    const;
        // FIRSTS
        date first_monday()     const;
        date first_tuesday()    const;
        date first_wednesday()  const;
        date first_thursday()   const;
        date first_friday()     const;
        date first_saturday()   const;
        date first_sunday()     const;
        // SECONDS
        date second_monday()    const;
        date second_tuesday()   const;
        date second_wednesday() const;
        date second_thursday()  const;
        date second_friday()    const;
        date second_saturday()  const;
        date second_sunday()    const;
        // THIRDS
        date third_monday()     const;
        date third_tuesday()    const;
        date third_wednesday()  const;
        date third_thursday()   const;
        date third_friday()     const;
        date third_saturday()   const;
        date third_sunday()     const;
        // FOURTHS
        date fourth_monday()    const;
        date fourth_tuesday()   const;
        date fourth_wednesday() const;
        date fourth_thursday()  const;
        date fourth_friday()    const;
        date fourth_saturday()  const;
        date fourth_sunday()    const;
        // LASTS
        date last_monday()      const;
        date last_tuesday()     const;
        date last_wednesday()   const;
        date last_thursday()    const;
        date last_friday()      const;
        date last_saturday()    const;
        date last_sunday()      const;
    };
}

#endif