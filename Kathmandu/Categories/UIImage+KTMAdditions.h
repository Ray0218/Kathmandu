//
//  UIImage+KTMAdditions.h
//  Kathmandu
//
//  Created by WUFAN on 14-8-22.
//  Copyright (c) 2014年 dacai. All rights reserved.
//

#import <AssetsLibrary/AssetsLibrary.h>
#import <UIKit/UIKit.h>

@interface UIImage (KTMAdditions)
@property (nonatomic, assign, readonly) CGFloat dp_width;
@property (nonatomic, assign, readonly) CGFloat dp_height;

+ (UIImage *)dp_imageWithColor:(UIColor *)color;
- (UIImage *)dp_imageWithTintColor:(UIColor *)tintColor;
- (UIImage *)dp_imageWithGradientTintColor:(UIColor *)tintColor;

- (UIImage *)dp_roundImageWithDiameter:(CGFloat)diameter;
- (UIImage *)dp_croppedImage:(CGRect)bounds;
- (UIImage *)dp_resizedImageToSize:(CGSize)dstSize;
- (UIImage *)dp_resizedImageToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale;

+ (UIImage *)reduceImage:(UIImage *)image percent:(float)percent;
+ (UIImage *)imageWithImageSimple:(UIImage *)image scaledToSize:(CGSize)newSize;
/**
 *  对asset放缩
 *
 *  @param asset ALAsset
 *  @param size  图片最大尺寸
 *
 *  @return <#return value description#>
 */
- (UIImage *)thumbnailForAsset:(ALAsset *)asset maxPixelSize:(NSUInteger)size;

@end
