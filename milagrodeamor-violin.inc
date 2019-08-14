\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \major

		R2*28  |
		r8 e' fis' gis' a' b' cis'' d''  |
%% 30
		e'' 1  |
		R1*17  |
		b'' 8 a'' a'' 2.  |
		r8 b' e'' fis'' gis'' a'' gis'' fis''  |
%% 50
		fis'' 8 gis'' a'' 2 a'' 4  |
		gis'' 1  |
		r8 d'' e'' fis'' 2 r8  |
		r8 d'' e'' f'' 4. e'' 8 d''  |
		cis'' 4. cis'' d'' 8 cis''  |
%% 55
		b' 2. r4  |
		R1*55  |
		\bar "|."
	}
>>
