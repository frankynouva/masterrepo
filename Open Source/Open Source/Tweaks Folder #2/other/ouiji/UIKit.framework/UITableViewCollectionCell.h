/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCollectionCell : UITableViewCell <UICollectionViewTableAllRowAttributes>

@property (nonatomic) long long accessoryType;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInset;
@property (nonatomic) double defaultMarginWidth;
@property (nonatomic) bool drawsSeparatorAtBottomOfSection;
@property (nonatomic) bool drawsSeparatorAtTopOfSection;
@property (nonatomic) long long editingStyle;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) bool layoutMarginsFollowReadableWidth;
@property (nonatomic) double sectionBorderWidth;
@property (nonatomic) int sectionLocation;
@property (nonatomic, copy) UIColor *separatorColor;
@property (nonatomic, retain) UIVisualEffect *separatorEffect;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) bool shouldIndentWhileEditing;
@property (nonatomic) bool showsReorderControl;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInset;
- (double)defaultMarginWidth;
- (bool)drawsSeparatorAtBottomOfSection;
- (bool)drawsSeparatorAtTopOfSection;
- (double)sectionBorderWidth;
- (id)separatorEffect;
- (void)setBackgroundInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDefaultMarginWidth:(double)arg1;
- (void)setDrawsSeparatorAtBottomOfSection:(bool)arg1;
- (void)setDrawsSeparatorAtTopOfSection:(bool)arg1;
- (void)setSectionBorderWidth:(double)arg1;
- (void)setSeparatorEffect:(id)arg1;

@end
