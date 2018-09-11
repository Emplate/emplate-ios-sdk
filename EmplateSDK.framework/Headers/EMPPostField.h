//
//  EMPPostField.h
//  EmplateSDK
//
//  Created by Victor Kristensen on 31/07/2017.
//  Copyright © 2017 Emplate ApS. All rights reserved.
//

@import Foundation;
@import Realm;
#import "EMPApiModel.h"
NS_ASSUME_NONNULL_BEGIN

// An enum containing the different EMPPostFieldTypes
typedef NS_ENUM(NSInteger, EMPPostFieldType) {
    EMPPostFieldTypeText = 1,
    EMPPostFieldTypeImages,
    EMPPostFieldTypeVideo,
    EMPPostFieldTypeFileToMail,
    EMPPostFieldTypeQuiz,
    EMPPostFieldTypeCoupon,
    EMPPostFieldTypeCallToAction
};

/**
 A PostField is the actual content of the Post. A post consist of one or more post fields. Post fields can be different types like text, image, video, coupon etc.
 */
@interface EMPPostField : EMPApiModel
/**
 A unique id
 */
@property (nullable) NSNumber<RLMInt> *postFieldId;
/**
 An id of the post field type
 */
@property EMPPostFieldType postFieldTypeId;
/**
 The index of the postField on the post
 */
@property int order;
/**
 The index of the postField on the post
 */
@property NSString *content;
/**
 Date of creation in the Emplate API
 */
@property (nullable) NSDate *createdAt;
/**
 Date of last update in the Emplate API
 */
@property (nullable) NSDate *updatedAt;
/**
 The post object(s) the postField is assigned to
 
 _A postField can only be assigned to one post in the Emplate API, but Realm will find all posts linking to this PostField. In all normal cases this collection will only contain a single post._
 @see EMPPost
 */
@property (readonly) RLMLinkingObjects *posts;

@end

NS_ASSUME_NONNULL_END
RLM_ARRAY_TYPE(EMPPostField);
