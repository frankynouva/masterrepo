/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _chromeBuffer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedOffset;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } chromeBuffer;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedOffset;

+ (id)infoWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)placementWithUndockedOffset:(struct CGPoint { double x1; double x2; })arg1 chromeBuffer:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
+ (bool)supportsSecureCoding;

- (Class)applicatorClassForKeyboard:(bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })chromeBuffer;
- (void)encodeWithCoder:(id)arg1;
- (double)heightOfInputViews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)inputViewWillAppear;
- (bool)isEqual:(id)arg1;
- (bool)isUndocked;
- (struct CGPoint { double x1; double x2; })normalizedOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(bool)arg2;
- (void)setChromeBuffer:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNormalizedOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
