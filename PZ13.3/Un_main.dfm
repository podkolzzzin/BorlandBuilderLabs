object Form1: TForm1
  Left = 192
  Top = 148
  Width = 1305
  Height = 251
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
  object Lbl_words: TLabel
    Left = 32
    Top = 96
    Width = 192
    Height = 26
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1089#1083#1086#1074': '
  end
  object Lbl_output: TLabel
    Left = 224
    Top = 96
    Width = 6
    Height = 26
  end
  object Edit_max: TEdit
    Left = 32
    Top = 48
    Width = 353
    Height = 34
    TabOrder = 0
  end
  object Btn_count: TButton
    Left = 32
    Top = 136
    Width = 353
    Height = 49
    Caption = #1057#1095#1080#1090#1072#1090#1100
    TabOrder = 1
    OnClick = Btn_countClick
  end
end
