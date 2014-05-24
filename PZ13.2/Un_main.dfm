object Form1: TForm1
  Left = 445
  Top = 665
  Width = 1282
  Height = 335
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
  object Lbl_output: TLabel
    Left = 264
    Top = 64
    Width = 6
    Height = 26
  end
  object Max_edit: TEdit
    Left = 16
    Top = 16
    Width = 185
    Height = 34
    TabOrder = 0
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 72
    Width = 233
    Height = 145
    Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099
    TabOrder = 1
    object CheckBox1: TCheckBox
      Left = 32
      Top = 48
      Width = 161
      Height = 25
      Caption = #1046#1080#1088#1085#1099#1081
      TabOrder = 0
      OnClick = CheckBox1Click
    end
    object CheckBox2: TCheckBox
      Left = 32
      Top = 80
      Width = 161
      Height = 25
      Caption = #1050#1091#1088#1089#1080#1074
      TabOrder = 1
      OnClick = CheckBox2Click
    end
  end
  object Btn_set: TButton
    Left = 16
    Top = 232
    Width = 233
    Height = 33
    Caption = #1059#1089#1090#1072#1085#1086#1074#1080#1090#1100
    TabOrder = 2
    OnClick = Btn_setClick
  end
end
