//
//  NSDate+KTMAdditions.h
//  Kathmandu
//
//  Created by WUFAN on 14-6-27.
//  Copyright (c) 2014年 dacai. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *dp_DateFormatter_yyyy_MM_dd_HH_mm_ss;
extern NSString *dp_DateFormatter_yyyy_MM_dd_HH_mm;
extern NSString *dp_DateFormatter_yyyy_MM_dd;
extern NSString *dp_DateFormatter_MM_dd_HH_mm;
extern NSString *dp_DateFormatter_MM_dd;
extern NSString *dp_DateFormatter_HH_mm;

@interface NSDate (KTMAdditions)

/**
*  根据日期字符串生成日期对象
*
*  @param string [in]日期字符串 e.g. @"2014-06-07 13:36:07"
*  @param format [in]日期格式  e.g. @"yyyy-MM-dd HH:mm:ss"
*
*  @return NSDate
*/
+ (NSDate *)dp_dateFromString:(NSString *)string withFormat:(NSString *)format;

/**
 *  将日期格式化为字符串
 *
 *  @param format [in]日期格式  e.g. @"yyyy-MM-dd HH:mm:ss"
 *
 *  @return 格式化后的字符串 e.g. @"2014-06-07 13:36:07"
 */
- (NSString *)dp_stringWithFormat:(NSString *)format;

/**
 *  将日期字符串转化为指定格式的字符串
 *
 *  @param string     [in]日期字符串  e.g. @"2014-06-07 13:36:07"
 *  @param srcFormat  [in]原格式   e.g. @"yyyy-MM-dd HH:mm:ss"
 *  @param destFormat [in]目标格式   e.g. @"HH:mm"
 *
 *  @return e.g. @"13:36"
 */
+ (NSString *)dp_coverDateString:(NSString *)string fromFormat:(NSString *)srcFormat toFormat:(NSString *)destFormat;
/**
 *  计算传入日期与当前时间的差距
 *
 *  @param theDate 日期
 *
 *  @return “刚刚”，”几分钟前“，”昨天“，”前天“，”日期“
 */
+ (NSString *)humanableInfoFromDate: (NSDate *) theDate ;

@property (nonatomic, assign, readonly) int dp_nearestHour;
@property (nonatomic, assign, readonly) int dp_hour;
@property (nonatomic, assign, readonly) int dp_minute;
@property (nonatomic, assign, readonly) int dp_seconds;
@property (nonatomic, assign, readonly) int dp_day;
@property (nonatomic, assign, readonly) int dp_month;
@property (nonatomic, assign, readonly) int dp_week;
@property (nonatomic, assign, readonly) int dp_weekday;    // e.g. Saturday weekday == 7, Sunday weekday == 1, Monday weekday == 2
@property (nonatomic, strong, readonly) NSString *dp_weekdayName;//星期一....
@property (nonatomic, strong, readonly) NSString *dp_weekdayNameSimple;//周一...
@property (nonatomic, assign, readonly) int dp_nthWeekday; // e.g. 2nd Tuesday of the month == 2
@property (nonatomic, assign, readonly) int dp_year;

@end
