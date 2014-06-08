object Form6: TForm6
  Left = 0
  Top = 0
  Caption = #1051#1072#1073#1086#1088#1072#1090#1086#1088#1085#1072#1103' '#1088#1072#1073#1086#1090#1072' '#8470'2.2-2.3'
  ClientHeight = 272
  ClientWidth = 569
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Chart1: TChart
    Left = 8
    Top = 8
    Width = 400
    Height = 250
    Title.Text.Strings = (
      'TChart')
    BottomAxis.LabelsFormat.TextAlignment = taCenter
    DepthAxis.LabelsFormat.TextAlignment = taCenter
    DepthTopAxis.LabelsFormat.TextAlignment = taCenter
    LeftAxis.LabelsFormat.TextAlignment = taCenter
    RightAxis.LabelsFormat.TextAlignment = taCenter
    TopAxis.LabelsFormat.TextAlignment = taCenter
    View3D = False
    Zoom.Pen.Mode = pmNotXor
    TabOrder = 0
    DefaultCanvas = 'TGDIPlusCanvas'
    PrintMargins = (
      15
      18
      15
      18)
    ColorPaletteIndex = 13
    object Series2: TFastLineSeries
      Marks.Visible = False
      SeriesColor = clRed
      LinePen.Color = clRed
      LinePen.SmallSpace = 1
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
      object TeeFunction1: TCustomTeeFunction
        CalcByValue = False
        Period = 1.000000000000000000
        NumPoints = 100
      end
    end
    object Series1: TFastLineSeries
      Marks.Visible = False
      SeriesColor = clGreen
      LinePen.Color = clGreen
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
      object TeeFunction2: TCustomTeeFunction
        CalcByValue = False
        Period = 1.000000000000000000
        NumPoints = 100
      end
    end
    object Series3: TFastLineSeries
      Marks.Visible = False
      SeriesColor = clBlue
      LinePen.Color = clBlue
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
      object TeeFunction3: TCustomTeeFunction
        CalcByValue = False
        Period = 1.000000000000000000
        NumPoints = 100
      end
    end
  end
  object Edit1: TEdit
    Left = 425
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '2'
  end
  object Button1: TButton
    Left = 425
    Top = 39
    Width = 121
    Height = 25
    Caption = '2.2'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 425
    Top = 70
    Width = 121
    Height = 25
    Caption = '2.3'
    TabOrder = 3
    OnClick = Button2Click
  end
end
