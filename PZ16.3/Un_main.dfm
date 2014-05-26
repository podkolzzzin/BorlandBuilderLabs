object Form1: TForm1
  Left = 192
  Top = 148
  Width = 1357
  Height = 901
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
  object StringGrid1: TStringGrid
    Left = 0
    Top = 32
    Width = 329
    Height = 169
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goDrawFocusSelected, goRowSizing, goColSizing]
    TabOrder = 0
  end
  object Button1: TButton
    Left = 0
    Top = 0
    Width = 329
    Height = 33
    Caption = #1042#1082#1083#1102#1095#1080#1090#1100
    TabOrder = 1
    OnClick = Button1Click
  end
  object Btn_addCol: TButton
    Left = 328
    Top = 32
    Width = 33
    Height = 33
    Caption = '+'
    TabOrder = 2
    OnClick = Btn_addColClick
  end
  object Btn_addRow: TButton
    Left = 0
    Top = 200
    Width = 33
    Height = 33
    Caption = '+'
    TabOrder = 3
    OnClick = Btn_addRowClick
  end
  object Btn_removeCol: TButton
    Left = 328
    Top = 64
    Width = 33
    Height = 33
    Caption = '-'
    TabOrder = 4
    OnClick = Btn_removeColClick
  end
  object Btn_removeRow: TButton
    Left = 32
    Top = 200
    Width = 33
    Height = 33
    Caption = '-'
    TabOrder = 5
    OnClick = Btn_removeRowClick
  end
end
