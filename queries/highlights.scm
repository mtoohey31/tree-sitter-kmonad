(identifier) @variable
(value) @string
(fallthrough) @comment
(boolean) @boolean
(string) @string
(escaped_value) @string.escape
(alias) @type

(function_call . (identifier) @function)

(deflayer . (identifier) @label)

[
  (inline_comment)
  (block_comment)
] @comment

["(" ")"] @punctuation.bracket
