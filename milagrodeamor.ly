% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Milagro de amor"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 2/4
	\skip 2*28
	\time 4/4
}
globalTempo = {
	\tempo 4 = 52
	\skip 2*28
	\tempo 4 = 116
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "milagrodeamor-acordes.inc"
		\include "milagrodeamor-marcas.inc"
		\new StaffGroup <<
			\include "milagrodeamor-soprano.inc"
			\include "milagrodeamor-mezzo.inc"
			\include "milagrodeamor-tenor.inc"
		>>
		\include "milagrodeamor-violin.inc"
		%\include "milagrodeamor-huevo.inc"
	>>

	\layout { \context { \RemoveEmptyStaffContext } }
}
