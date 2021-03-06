// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_TextDisplayTemplate_HeaderFile
#define _IGESGraph_TextDisplayTemplate_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESGraph_TextDisplayTemplate.hxx>

#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IGESGraph_TextFontDef.hxx>
#include <gp_XYZ.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>
class IGESGraph_TextFontDef;
class gp_XYZ;
class gp_Pnt;


//! defines IGES TextDisplayTemplate Entity,
//! Type <312>, form <0, 1> in package IGESGraph
//!
//! Used to set parameters for display of information
//! which has been logically included in another entity
//! as a parameter value
class IGESGraph_TextDisplayTemplate : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGraph_TextDisplayTemplate();
  
  //! This method is used to set the fields of the class
  //! TextDisplayTemplate
  //! - aWidth         : Character box width
  //! - aHeight        : Character box height
  //! - afontCode      : Font code
  //! - aFontEntity    : Text Font Definition Entity
  //! - aSlantAngle    : Slant angle
  //! - aRotationAngle : Rotation angle
  //! - aMirrorFlag    : Mirror Flag
  //! - aRotationFlag  : Rotate internal text flag
  //! - aCorner        : Lower left corner coordinates(Form No. 0),
  //! Increments from coordinates  (Form No. 1)
  Standard_EXPORT   void Init (const Standard_Real aWidth, const Standard_Real aHeight, const Standard_Integer aFontCode, const Handle(IGESGraph_TextFontDef)& aFontEntity, const Standard_Real aSlantAngle, const Standard_Real aRotationAngle, const Standard_Integer aMirrorFlag, const Standard_Integer aRotationFlag, const gp_XYZ& aCorner) ;
  
  //! Sets <me> to be Incremental (Form 1) if <mode> is True,
  //! or Basolute (Form 0) else
  Standard_EXPORT   void SetIncremental (const Standard_Boolean mode) ;
  
  //! returns True  if entity is Incremental (Form 1).
  //! False if entity is Absolute    (Form 0).
  Standard_EXPORT   Standard_Boolean IsIncremental()  const;
  
  //! returns Character Box Width.
  Standard_EXPORT   Standard_Real BoxWidth()  const;
  
  //! returns Character Box Height.
  Standard_EXPORT   Standard_Real BoxHeight()  const;
  
  //! returns False if theFontEntity is Null, True otherwise.
  Standard_EXPORT   Standard_Boolean IsFontEntity()  const;
  
  //! returns the font code.
  Standard_EXPORT   Standard_Integer FontCode()  const;
  
  //! returns Text Font Definition Entity used to define the font.
  Standard_EXPORT   Handle(IGESGraph_TextFontDef) FontEntity()  const;
  
  //! returns slant angle of character in radians.
  Standard_EXPORT   Standard_Real SlantAngle()  const;
  
  //! returns Rotation angle of text block in radians.
  Standard_EXPORT   Standard_Real RotationAngle()  const;
  
  //! returns Mirror flag
  //! Mirror flag : 0 = no mirroring.
  //! 1 = mirror axis perpendicular to text base line.
  //! 2 = mirror axis is text base line.
  Standard_EXPORT   Standard_Integer MirrorFlag()  const;
  
  //! returns Rotate internal text flag.
  //! Rotate internal text flag : 0 = text horizontal.
  //! 1 = text vertical.
  Standard_EXPORT   Standard_Integer RotateFlag()  const;
  
  //! If IsIncremental() returns False,
  //! gets coordinates of lower left corner
  //! of first character box.
  //! If IsIncremental() returns True,
  //! gets increments from X, Y, Z coordinates
  //! found in parent entity.
  Standard_EXPORT   gp_Pnt StartingCorner()  const;
  
  //! If IsIncremental() returns False,
  //! gets coordinates of lower left corner
  //! of first character box.
  //! If IsIncremental() returns True,
  //! gets increments from X, Y, Z coordinates
  //! found in parent entity.
  Standard_EXPORT   gp_Pnt TransformedStartingCorner()  const;




  DEFINE_STANDARD_RTTI(IGESGraph_TextDisplayTemplate)

protected:




private: 


  Standard_Real theBoxWidth;
  Standard_Real theBoxHeight;
  Standard_Integer theFontCode;
  Handle(IGESGraph_TextFontDef) theFontEntity;
  Standard_Real theSlantAngle;
  Standard_Real theRotationAngle;
  Standard_Integer theMirrorFlag;
  Standard_Integer theRotateFlag;
  gp_XYZ theCorner;


};







#endif // _IGESGraph_TextDisplayTemplate_HeaderFile
