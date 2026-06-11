\context Staff = "bajo" <<
	\set Staff.instrumentName = "Bajo"
	\set Staff.shortInstrumentName = "B."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "bajo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "bass_8"
		\key a \major

		\bajo

		\bar "|."
	}
>>

\context TabStaff = "tabbajo" <<
	\clef moderntab
	%\set Staff.stringTunings = \stringTuning <b,,, e,, a,, d, g,>
	\set Staff.stringTunings = \stringTuning <e,, a,, d, g,>
	\override Stem #'transparent = ##t
	\override Stem #'length = #0
	\override Beam #'transparent = ##t
	\set autoBeaming = ##f
	\override Staff.Rest #'break-visibility = #all-invisible

	\bajo
>>
