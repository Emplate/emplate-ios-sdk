//
//  EMPDateFormatter.h
//  EmplateSDK
//
//  Created by Søren Gregersen on 23/08/2016.
//  Copyright (c) 2016 Emplate ApS. All rights reserved.
//

@import Foundation;

/**
 Use this little helper for parsing and formatting dates for the Emplate API

 The format used in this class is: `yyyy-MM-dd'T'HH:mm:ssZZZ` which is formatted like: _2017-05-31T13:37:42+0000_.
 */
@interface EMPDateFormatter : NSObject
/**
 Get a NSDate from a string
 @param dateString - A string with the date matching the format in [self dateFormatter]
 @return A new NSDate object
 */
+ (NSDate *)dateFromString:(NSString *)dateString;
/**
 Returns a string from a NSDate object - the string will be formatted as the [self dateFormatter]
 @param date The date object to get a formatted string from
 @return A formatted date string
 */
+ (NSString *)formattedStringFromDate:(NSDate *)date;
/**
 Returns a new NSDateFormatter with the Emplate API ISO8601 format
 @return A new NSDateFormatter
 */
+ (NSDateFormatter *)dateFormatter;

@end
