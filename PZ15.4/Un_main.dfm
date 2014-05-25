object Form1: TForm1
  Left = 281
  Top = 232
  Width = 1305
  Height = 750
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -23
  Font.Name = 'Arial'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 26
  object Label1: TLabel
    Left = 464
    Top = 8
    Width = 85
    Height = 26
    Caption = #1056#1072#1079#1084#1077#1088':'
  end
  object Memo_output: TMemo
    Left = 8
    Top = 48
    Width = 1273
    Height = 649
    TabOrder = 0
    OnEnter = OnEnter
  end
  object Button1: TButton
    Left = 360
    Top = 232
    Width = 609
    Height = 161
    Caption = #1057#1095#1080#1090#1072#1090#1100
    TabOrder = 1
    Visible = False
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 896
    Top = 8
    Width = 377
    Height = 33
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 2
    OnClick = Button2Click
  end
  object CheckBox1: TCheckBox
    Left = 24
    Top = 8
    Width = 137
    Height = 33
    Caption = #1046#1080#1088#1085#1099#1081
    TabOrder = 3
    OnClick = CheckBox1Click
  end
  object CheckBox2: TCheckBox
    Left = 160
    Top = 8
    Width = 113
    Height = 33
    Caption = #1050#1091#1088#1089#1080#1074
    TabOrder = 4
    OnClick = CheckBox2Click
  end
  object Edit1: TEdit
    Left = 552
    Top = 8
    Width = 161
    Height = 34
    TabOrder = 5
    OnChange = OnCahnge
  end
end
