object Form1: TForm1
  Left = 476
  Top = 205
  Width = 430
  Height = 583
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -27
  Font.Name = 'Arial'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 32
  object Edit1: TEdit
    Left = 8
    Top = 8
    Width = 393
    Height = 40
    TabOrder = 0
  end
  object Button1: TButton
    Left = 8
    Top = 64
    Width = 193
    Height = 49
    Caption = 'C'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 216
    Top = 64
    Width = 185
    Height = 49
    Caption = '<-'
    TabOrder = 2
    OnClick = ClearClick
  end
  object Button3: TButton
    Left = 8
    Top = 128
    Width = 89
    Height = 89
    Caption = '7'
    TabOrder = 3
    OnClick = NumberClick
  end
  object Button4: TButton
    Left = 112
    Top = 128
    Width = 89
    Height = 89
    Caption = '8'
    TabOrder = 4
    OnClick = NumberClick
  end
  object Button5: TButton
    Left = 216
    Top = 128
    Width = 89
    Height = 89
    Caption = '9'
    TabOrder = 5
    OnClick = NumberClick
  end
  object Button6: TButton
    Left = 8
    Top = 232
    Width = 89
    Height = 89
    Caption = '4'
    TabOrder = 6
    OnClick = NumberClick
  end
  object Button7: TButton
    Left = 112
    Top = 232
    Width = 89
    Height = 89
    Caption = '5'
    TabOrder = 7
    OnClick = NumberClick
  end
  object Button8: TButton
    Left = 216
    Top = 232
    Width = 89
    Height = 89
    Caption = '6'
    TabOrder = 8
    OnClick = NumberClick
  end
  object Button9: TButton
    Left = 8
    Top = 336
    Width = 89
    Height = 89
    Caption = '1'
    TabOrder = 9
    OnClick = NumberClick
  end
  object Button10: TButton
    Left = 112
    Top = 336
    Width = 89
    Height = 89
    Caption = '2'
    TabOrder = 10
    OnClick = NumberClick
  end
  object Button11: TButton
    Left = 216
    Top = 336
    Width = 89
    Height = 89
    Caption = '3'
    TabOrder = 11
    OnClick = NumberClick
  end
  object Button12: TButton
    Left = 8
    Top = 440
    Width = 89
    Height = 89
    Caption = '0'
    TabOrder = 12
    OnClick = NumberClick
  end
  object Button13: TButton
    Left = 112
    Top = 440
    Width = 89
    Height = 89
    Caption = ','
    TabOrder = 13
    OnClick = Button13Click
  end
  object Button14: TButton
    Left = 216
    Top = 440
    Width = 89
    Height = 89
    Caption = '='
    TabOrder = 14
    OnClick = Button14Click
  end
  object Button15: TButton
    Left = 312
    Top = 128
    Width = 89
    Height = 89
    Caption = '+'
    TabOrder = 15
    OnClick = OperationClick
  end
  object Button16: TButton
    Left = 313
    Top = 232
    Width = 89
    Height = 89
    Caption = '-'
    TabOrder = 16
    OnClick = OperationClick
  end
  object Button17: TButton
    Left = 313
    Top = 336
    Width = 89
    Height = 89
    Caption = '*'
    TabOrder = 17
    OnClick = OperationClick
  end
  object Button18: TButton
    Left = 313
    Top = 440
    Width = 89
    Height = 89
    Caption = '/'
    TabOrder = 18
    OnClick = OperationClick
  end
end
